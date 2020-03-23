## Resume

SOURCE CODE (file.c) -> COMPILER -> MACHINE CODE(file.out) (0010)

> Computers only do what you tell they to do

First code in C:

```c
#include <stdio.h>

int main(void){
    printf("Hello World!\n");
}
```

Second code:

```c
#include <cs50.h>
#include <stdio.h>

int main(void){
    string answer = get_string("What's your name? \n");
    printf("Hello, %s \n", answer);
}
```

The terminal (prompt, bash) provide some commands like ls (list), cd (change directory), mkdir (make directory), rm (remove), rmdir(remove dir) and [many others](https://ss64.com/bash/)

Everything you can do with your mouse, you also do in command line.

'=' is assign in programming, so `age = 1995` means assign `1995` to `age`

> Read the documentation, and ask Google.

If you want to read some code brek it in different parts.

> If you have questions, try it.

Link or include some library in my code is like combine somewhere code with mine code and compile into one program.

Data types are some: bool, integer, string, char, float, long...

> Programming is muscle memory

Third code:

```c
#include <cs50.h>
#include <stdio.h>

int main(void){
    int age = get_int("What's your age?\n");
    printf("You're %i\n", age * 365);
}
```

Parity code:

```c
#include <cs50.h>
#include <stdio.h>

int main(void){
    int number = get_int("What number?\n");

    if(number % 2 == 0){
        printf("Number is even");
    } else {
        printf("Number is odd");
    }
}
```

Cough with functions:

```c
#include <cs50.h>
#include <stdio.h>

void cough(int n);

int main(void){
    cough(3);
}

void cough(int n){
    for(int i = 0; i < n; i++){
        printf("cough!\n");
    }
}
```

> Writing a good or a bad code is a lot about design decisions

### Data Types - Shorts

`void` in C is nothing, returns nothing.

Only declare a variable if you need it.

`int age;` <- Declaration
`age = 1995;` <- Assignment

Initilization is when you declare and assign a variable at the same time:
`int power = 9001;`

#### Operators and Expressions:

Arithmetic `+ - * / %`
Syntax Sugar `*= -= += ++ --`
Boolean `true false 0 1`, any number > 0 is true
Logical `&& (AND) || (OR)`
Not `!x`
Relational `< > <= >=`
Equality `==`
Inequality `!==`

#### Conditionals

```c
if(boolean-expression){
    // execute this
} else if(another-boolean){
    // execute this
} else {
    // execute this
}
```

Switch, case-break-case-case-default

Ternary, `x > 4 ? true : false`

#### Loops

`while, do while, for`

`for(start;expression;increment)`

#### Basic linux commands

```bash
cd - ls - mkdir - pwd - cp - mv - rm - rmdir
chmod - ln - touch - rmdir - man - diff - sudo - clear - telnet
```

## Links

- [Sandbox CS50](https://sandbox.cs50.io)
- [LAB CS50](https://lab.cs50.io/)
