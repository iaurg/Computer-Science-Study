from cs50 import get_int
from sys import exit

height = get_int("Height: ")

while height < 1 or height > 8:
    height = get_int("Height: ")

for line in range(1, height + 1):

    for spaces in range(height - line):
        print(" ", end="")

    print(f"{line * '#'}", end="")

    for gap in range(2):
        print(" ", end="")

    print(f"{line * '#'}", end="\n")