from cs50 import get_string

text = get_string("Text: ")


def calculateGrade(text):
    length = len(text)
    countLetters = 0
    countWords = 0
    countSentences = 0

    if text[0].isalpha:
        countWords += 1

    for i in range(length):
        unicodeLetter = ord(text[i])

        if text[i].isalpha():
            countLetters += 1
        elif unicodeLetter == 32:
            if text[i+1].isalpha() or text[i+2].isalpha():
                countWords += 1

        if unicodeLetter == 46 or unicodeLetter == 33 or unicodeLetter == 63:
            countSentences += 1

    L = countLetters / countWords * 100
    S = countSentences / countWords * 100
    grade = round(0.0588 * L - 0.296 * S - 15.8)

    if grade < 1:
        print("Before Grade 1")
    elif grade > 16:
        print("Grade 16+")
    else:
        print(f"Grade {grade}")


calculateGrade(text)