from sys import exit, argv
import os
import csv
import re


def main():
    if len(argv) != 3:
        print("Usage: python dna.py CSVSTR TXTDNA")
        exit()

    dnaFile = argv[1]
    sequenceFile = argv[2]

    validateFileType(dnaFile, '.csv')
    validateFileType(sequenceFile, '.txt')

    openSequence = open(sequenceFile, 'r')
    sequenceContent = openSequence.read()
    openSequence.close()

    with open(dnaFile, "r") as file:
        csvReader = csv.DictReader(file)
        result = {}
        for row in csvReader:
            result[row['name']] = []
            for key in row:
                if key != "name":
                    if maximumStrRepeats(sequenceContent, key) == str(row[key]):
                        result[row['name']].append(True)
                    else:
                        result[row['name']].append(False)

    finalResult = 'No Match'

    for key in result:
        if all(result[key]):
            finalResult = key

    print(finalResult)


def validateFileType(file, expectedExtension):
    name, extension = os.path.splitext(file)
    if extension != expectedExtension:
        print("Invalid file type")
        exit()


def maximumStrRepeats(sequence, dnaPattern):
    p = rf'({dnaPattern})\1*'
    pattern = re.compile(p)
    match = [match for match in pattern.finditer(sequence)]
    max = 0
    for i in range(len(match)):
        if match[i].group().count(dnaPattern) > max:
            max = match[i].group().count(dnaPattern)
    return str(max)

    '''
    I don't know where it's wrong, ever has 1 of difference in some sequences.txt.
    lengthPattern = len(dnaPattern)
    totalSequence = 0
    maxSequence = 0
    for i in range(len(sequence)):
        if sequence[i : i + lengthPattern] == dnaPattern:
            while sequence[i - lengthPattern : i] == dnaPattern:
                totalSequence += 1
                i+=1
        elif totalSequence > maxSequence:
                    maxSequence = totalSequence
    #print(maxSequence, totalSequence, 'x')
    return str(maxSequence + 1)
    '''


if __name__ == "__main__":
    main()