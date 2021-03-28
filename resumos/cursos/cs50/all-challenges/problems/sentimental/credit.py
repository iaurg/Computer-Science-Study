from cs50 import get_string
import re
import sys


def main():
    cardNumber = get_string("Number: ")

    isValidLength = re.match('[0-9]{15,16}', cardNumber)

    if not isValidLength:
        print("INVALID")
        sys.exit()

    finalCardFlag = checkCardFlags(cardNumber)
    print(finalCardFlag)


def checkFirstTwoDigits(cardNumber):
    return f"{cardNumber[0]}{cardNumber[1]}"


def checkCardFlags(cardNumber):
    firstDigits = int(checkFirstTwoDigits(cardNumber))
    cardLength = len(cardNumber)

    if (cardLength == 15):
        if (firstDigits == 37 or firstDigits == 34):
            return ("AMEX")

    if (cardLength == 16 and firstDigits > 50):
        if (firstDigits > 50 and firstDigits <= 55):
            return ("MASTERCARD")

    if (cardLength == 13 or cardLength == 16):
        if (firstDigits >= 40 and firstDigits <= 49):
            return ("VISA")

    return ("INVALID")


if __name__ == "__main__":
    main()