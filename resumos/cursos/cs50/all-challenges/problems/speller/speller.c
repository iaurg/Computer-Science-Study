// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 65536;
int wordsInDictionary = 0;
// Hash table
node *table[N];
// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    unsigned int hashIndex = hash(word);

    // head
    node *cursor = table[hashIndex];

    if (cursor == NULL)
    {
        return false;
    }
    // strcasecmp(word, cursor)

    while (cursor != NULL)
    {
        int compare = strcasecmp(word, cursor->word);
        if (compare == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

// Hashes word to a number
/*
Reference: http://www.cse.yorku.ca/%7Eoz/hash.html
*/
unsigned int hash(const char *str)
{
    unsigned long hash = 5381;
    int c;
    while ((c = tolower(*str++)))
    {
        hash = ((hash << 5) + hash) + c;  /* hash * 33 + c */
    }
    /*Limit bucket*/
    return hash % N;
}

/*
 1 - Open dictionary file - OK
 2 - Read strins from file one at time - OK
 3 - Create a new node for each word - OK
 4 - Hash word to obtain a hash value - OK
 5 - Insert node into hash table at that location - OK
*/

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *dictionaryFile;
    dictionaryFile = fopen(dictionary, "r");
    char word[LENGTH];

    if (dictionaryFile == NULL)
    {
        fputs("File error ", stderr);
        return false;
    }

    while (fscanf(dictionaryFile, "%s", word) == 1)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return false;
        }

        // Copy word into node
        strcpy(n->word, word);
        n->next = NULL;

        // call hash function
        unsigned int hashIndex = hash(word);

        n->next = table[hashIndex];

        table[hashIndex] = n;
        wordsInDictionary++;
    }
    fclose(dictionaryFile);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return wordsInDictionary;
    // Count each word on load function
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int count = 0; count < N; count++)
    {
        node *cursor = table[count];

        while (cursor)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }

        if (count == N - 1 && cursor == NULL)
        {
            return true;
        }
    }


    return false;
}
