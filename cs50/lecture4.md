## Resume

HEX is a representation of big number in binary with potency 16.

Hex is a pattern with 1-9...A-F, where F means 15(decimal)

In hex forget about decimals numbers, are all binary.

You can find hex by 0x representation like 1 become 0x1, to avoid interpretation errors

Address of a value inside memory is represented by a pointer

In C:
& Whats is addressOf
* Go to addressOf

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

Strings can be called like char *varname

Malloc literaly alloc a address in memory, a pointer

> Remember to "free" memory when are you not using that

valgrind in IDE can catch leak memory

Temp variables for replaces

Heap and Stack overflow is a colide in memory.

HEAP -------> <------- STACK

You can write files in C using FILE, fprintf, fclose

