#include <cs50.h>
#include <stdio.h>
#include <string.h>

/*
1 - Prompt number with get_long: OK
2 - Count number in user input: OK
3 - Valid card number with < 13 items or > 16 items: OK
4 - Validate based on two first numbers: 
*/

int validateCard(long cardNumber);

int main(void)
{
    long cardNumber;
    cardNumber = get_long("Digit your credit card number:");
    validateCard(cardNumber);
}

int checkNumberLength(long number)
{
    int count = 0;
    long holder = number;
    
    while (holder != 0)
    {
        holder = holder / 10;
        count++;
    }
    return count;
}

int checkFirstTwoDigits(long number)
{
    while (number >= 100)
    {
        number /= 10;
    }

    return number;
}

string checkCardFlag(long cardNumber)
{

    int length = checkNumberLength(cardNumber);
    int firstDigits = checkFirstTwoDigits(cardNumber);
    // Validate cards based on length and first numbers
    if (length < 13 || length > 16)
    {
        return ("INVALID\n");
    }

    if (length == 15)
    {
        if (firstDigits == 37 || firstDigits == 34)
        {
            return ("AMEX\n");
        }        
        return ("INVALID\n");
    }

    if (length == 16 && firstDigits > 50)
    {
        if (firstDigits > 50 && firstDigits <= 55)
        {
            return ("MASTERCARD\n");
        }        
        return ("INVALID\n");
    }

    if (length == 13 || length == 16)
    {
        if (firstDigits >= 40 && firstDigits <= 49)
        {
            return ("VISA\n");
        }        
        return ("INVALID\n");
    }

    return ("INVALID\n");
}

bool validateCardNumber(long cardNumber)
{
    // I check the length of card number, then I can use "length" for operations
    int length = checkNumberLength(cardNumber);

    // Declare an array based on card number length
    int arrayNumbers[length];
    int count = 0;

    // Split card numbers and add each number in one position of array (back to front 123 became [3,2,1])
    while (cardNumber)
    {
        arrayNumbers[count] = cardNumber % 10;
        count++;
        cardNumber /= 10;
    }
    
    // Store interations
    int countOdd = 0;
    int countEven = 0;

    // Sum for validation
    int sumOdds = 0;
    int sumEvens = 0;

    // Iterate over arrayNumbers
    for (int i = 0; i <= length - 1; i++)
    {
        if (i % 2 == 0)
        {
            sumEvens += arrayNumbers[i];
            countEven++;
        } 
        else 
        {
            // Split one number in two, example: 10 become 1 0
            if (arrayNumbers[i] * 2 >= 10)
            {   
                // Catch last number
                sumOdds += (arrayNumbers[i] * 2) % 10;
                // Catch first number
                sumOdds += (arrayNumbers[i] * 2 / 10) % 10;
            } 
            else 
            {
                sumOdds += arrayNumbers[i] * 2;
            }
            countOdd++;
        }
    }

    int sumEvenWithOdd = sumOdds + sumEvens;
    
    // If the total’s last digit is 0 the number is valid!
    if (sumEvenWithOdd % 10 == 0)
    {
        return (true);
    } 
    else 
    {
        return (false);
    }

    return (false);
}

int validateCard(long cardNumber)
{    
    string cardFlag = checkCardFlag(cardNumber);
    
    if (!validateCardNumber(cardNumber))
    {    
        printf("INVALID\n");
    } 
    else 
    {
        printf("%s", cardFlag);
    }
    return 0;
}