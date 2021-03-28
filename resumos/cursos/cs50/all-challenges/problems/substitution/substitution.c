#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validateKey(string key);
string makeCiphertext(string plainText, string key);

int main(int argc, string argv[])
{
    // Check if user input too less or too many arguments in command line
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }

    string key = argv[1];
    // Store a isValid return for key
    int isValid = validateKey(key);

    // If key pass in all tests then get plaintext and encipher the text
    if (isValid == 0)
    {
        string plainText = get_string("plaintext:");
        string enchiper = makeCiphertext(plainText, key);
        printf("ciphertext: %s\n", enchiper);
    }
    else
    {
        return 1;
    }
}

string makeCiphertext(string plainText, string key)
{
    // Get length to use in compare and instance array
    long int lenght = strlen(plainText);

    // +1 is for \0 value in the end, this tell to memory it is a string
    char cipher[lenght + 1];

    // Append \0 value in last position of array
    cipher[-1] = '\0';

    for (int i = 0; i <= lenght; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            // If is a letter in current position based on ASCII value converting to uppercase, because plaintext can have numbers, spaces and sinals
            if (toupper(plainText[i]) >= 65 && toupper(plainText[i]) <= 90)
            {
                // Check if current letter in plaintext is equal the letter in alphabet I have your position
                if (toupper(plainText[i]) == j)
                {
                    //If is upper store letter in uppercase
                    if (isupper(plainText[i]))
                    {
                        // The position of letter is j - 65 (start value), then I refer the key value to cipher array
                        cipher[i] = toupper(key[j - 65]);
                    }
                    // Else store letter in lower case
                    else
                    {
                        cipher[i] = tolower(key[j - 65]);
                    }
                }
            }
            // If is number or anything not letter just store the value
            else
            {
                cipher[i] = plainText[i];
            }

        }
    }
    string result = cipher;
    return result;
}

int validateKey(string key)
{

    //Check if has 26 characters
    long int lenght = strlen(key);
    if (lenght < 26  || lenght > 26)
    {
        printf("Key must contain 26 characters. \n");
        return 1;
    }
    else
    {
        //Check if all characters are letters
        int count = 0;
        while (count < strlen(key))
        {

            //Check blank space/tab key
            if (isblank(key[count]))
            {
                printf("Usage: ./substitution key \n");
                return 1;
            }

            if (!isalpha(key[count]))
            {
                printf("Key accept only letters \n");
                return 1;
            }
            count++;
        }

        // Check if any character is repeated

        for (int i = 0; i < lenght; i++)
        {
            for (int j = i + 1; j < lenght; j++)
            {
                if (toupper(key[i]) == toupper(key[j]))
                {
                    printf("Repeated value in key \n");
                    return 1;
                }
            }
        }
    }

    return 0;
}