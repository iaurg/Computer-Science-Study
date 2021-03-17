## Resume

HEX is a representation of big number in binary with potency 16.

Hex is a pattern with 1-9...A-F, where F means 15(decimal)

In hex forget about decimals numbers, are all binary.

You can find hex by 0x representation like 1 become 0x1, to avoid interpretation errors

Address of a value inside memory is represented by a pointer

In C:
& Whats is addressOf

- Go to addressOf

```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *pointerx = &n;
    printf("%i\n", *pointerx);
}
```

Strings are just a pointer to the first character in memory until null(\0)

```c
#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    // Is the same pointer!
    printf("%p\n", s);
    printf("%p\n", &s[0]);
}
```

[] are just syntax sugar to pointer + value in brackets to access the next space in memory

```c
#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    // [] lier!
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}
```

malloc are used to memory allocate, when you need some "space" in memory to store some value.

```c
//Example of a copy program

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s:");

    char *t = malloc(strlen(s) + 1);

    for(int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);
}
```

Strings can be called like char \*varname

Malloc literaly alloc a address in memory, a pointer

> Remember to "free" memory when are you not using that

valgrind in IDE can catch leak memory

Temp variables for replaces

Heap and Stack overflow is a colide in memory.

HEAP -------> <------- STACK

You can write files in C using FILE, fprintf, fclose

## Hexadecimal numbers

A more concise way to express binary numbers. Just think, it's too hard to write code in binary, a big chain is hard to read.

Each decimal digit correponds into a unique arragement of 4 binary digits

Decimal first numbers are undistinguish from hexadecimal first number, because that hex number are represented with "x"

| Decimal | Binary | Hexadecimal |
| ------- | ------ | ----------- |
| 0       | 0000   | 0x0         |
| 1       | 0001   | 0x1         |
| 2       | 0010   | 0x2         |
| 3       | 0011   | 0x3         |
| 4       | 0100   | 0x4         |
| 5       | 0101   | 0x5         |
| 6       | 0110   | 0x6         |

## Pointers

Provides an alternative way to pass data between functions

Pointers points to a address in memory to access an value

Pointers address to location in memory.

Sometimes pointers can be null, pointing to nothing.

Pointers in C can be extracted from a existing variable using the & operator, this take address and pass to you.

Be cautious when passing values between pointers, it's really easy to mess some value.

## Dynamic Memory Allocation

DMA comes from a pool in heap and give you access to some space in memory with pointers.

In C malloc can give you a pointer to some memory space you want. Remember to free() memory when using malloc

## Call stacks

When you call something the system give you some spaces in stack that you can work with. One function wait for another to do your job.

## File Pointers

C provides a way to write and read data from files using a data structure named FILE
