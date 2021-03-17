## Resume

CS50 commands:

- debug50 (Try to ever use debugger)
- check50 (Helps muscle on do things with test)
- style50 (Helps to develop muscle on design codes)
- help50 (Help to find bug like a teacher in your console)

Library is code that other people wrote

> If stucked explain code to yourself

Debug can add breakpoints into your code

> Use debbuger even is possible

On Clang compiler this happen:
Preprocessing -> Compiling -> Assembling -> Linking

Preprocessing: Something like copy/paste all library codes inside your programm

Compiling: Transform source code into machine code, in Clang this take C code and compile in Assembly

Assembling: Transform Assembly code in Binary

Linking: Link all binary files in one file

> Write code that is easy to read, mantain and understand

**TEST!**

### Functions

Function can be named like procedure, methods or subroutines

Function = blackbox with 0+inputs and 1 output

Functions can help us with organization, simplification and reusability

> Give functions meaningful names

Functions separate our code into small pieces of code with one purpose.

Declaration: `return-type name(argument-list);`
Definition:

```c
int sum(num1, num2){
    return num1 + num2;
}
```

Exercise:
Is a valid triangle?

```c
#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float side1, float side2, float side3);

int main(void){
    valid_triangle(2,3,4);
}

bool valid_triangle(float side1, float side2, float side3){

    if(side1 < 0 || side2 < 0 || side3 < 0){
        return false;
    }

    if(side1 + side2 < side3 || side2 + side1 < side3 || side2 + side3 < side1){
        return false;
    }

    return true;
}
```

### Arrays

Arrays hold values of the same data type

Array is a block of contiguos space in memory

Array of elements acessed by index number

Model array `type name[size]` <- size is amount of elements array contain

`int student_grades[40]`

Instantiation syntax: `bool truthtable[3] = {true, false, true}`

### Command Line Arguments
argc - Argument count
argv - Argument vector

```c
int main(int argc string argv[])
```

This means if I provide a command like: `./hello cs50` the argc is equal 2 and argv equal ["./hello", "cs50"]

## Mentions

- [Grace Hopper](https://en.wikipedia.org/wiki/Grace_Hopper)

## Links

- [Origin of bug term](https://en.wikipedia.org/wiki/Software_bug)
- [CS50 IDE](https://ide.cs50.io/)
- [CS50 Docs](https://cs50.readthedocs.io/)
- [CS50 Programmer's Manual](https://man.cs50.io/)
