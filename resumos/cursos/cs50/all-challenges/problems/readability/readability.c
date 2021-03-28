#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int calculateGrade(string text);

int main(void)
{
    string text = get_string("Please type a text: ");
    int resultGrade = calculateGrade(text);
}

int calculateGrade(string text)
{
    int length = strlen(text);
    int countLetters = 0;
    int countWords = 0;
    int countSentences = 0;

    if (isalpha(text[0]))
    {
        countWords++;
    }

    // Pass for every letter in a input
    for (int i = 0; i < length; i++)
    {
        // If is a letter count based on is alphanumeric
        if (isalpha(text[i]))
        {
            countLetters++;
        }

        // Finded a space? Check if the next character is a letter, then count a word
        else if (text[i] == 32)
        {

            // Avoid "", but I think it can be better...
            if (isalpha(text[i + 1]) || isalpha(text[i + 2]))
            {
                countWords++;
            }
        }

        // Check if character is a !,? or ., then end a sentence.
        else if (text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            countSentences++;
        }

    }

    // Calculate Coleman-Liau index
    float L = (float)countLetters / (float)countWords * 100;
    float S = (float)countSentences / (float)countWords * 100;
    float grade = round(0.0588 * L - 0.296 * S - 15.8);

    if ((int) grade < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if ((int) grade >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }

    printf("Grade %i\n", (int) grade);

    return 0;
}