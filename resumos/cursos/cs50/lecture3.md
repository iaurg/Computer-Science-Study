## Resume

Big O notation = To describe the worst case algorithm scenario
Omega Ω notation = To describe the best case algorithm scenario
Theta Θ notation = To describe a algorithm if the best and worst case is the same O

Linear search go one by one searching: Big(O) = O(n) / Ω = Ω(1)

Binary search divide search in half, but this only work in sorted array: Big(O) = O(logn) / Ω = Ω(1)

Selection Sort: Look for small number and move to the start... one by one = O(n2) / Ω = Ω(n-1)

```c
// C simple linear search
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[6] = {3,5,2,12,31,42};
    for (int i = 0; i < 6; i++)
    {
        if(numbers[i] == 50)
        {
            printf("Found!\n");
            return 0; //Return convention 1 equals success
        }
    }
    prinf ("Not found\n");
    return 1; //Return convention 1 equals failure
}
```

typedef = Type definition in C
With type definition you can create some like an object

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // Struct is a container for multiple data types
{
    string name;
    string number;
}
person; //Defined a custom data type called person

int main(void)
{
    person people[2];

    people[0].name = "Italo";
    people[0].number = "41 9999-0595";
    people[1].name = "Helo";
    people[1].number = "43 9856-6598";

    for (int i=0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Italo") == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }

    printf ("Not found \n");
    return 1;
}

```

Recursion

```c
#include <cs50.h>
#include <stdio.h>

void draw(int height);

int main(void)
{
    int height = get_int("Height of pyramid: ");
    draw(height);
}

void draw(int height)
{
    if (height == 0){
        return;
    }

    draw(height - 1);

    for (int i = 0; i < height; i++)
    {
        printf ("#");
    }

    printf ("\n");
}
```

If some algorithm is dividing, dividing, dividing... This is a logarithm

## Linear Search

Iterate from all array left->right, until find the target value.
O(n) - Worst scenario
Ω(1) - Best scenario

## Binary Search

Divide and conquer, we just can use binary search if the array is shorted

Take the middle point of the array
Is your value? Finish
Not? Is less or high?
Change position to middle (left or right) and do all again

O(log n) - Worst scenario
Ω(1) - Best scenario

## Links

- [Big O Notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Comparison Sorting Algorithm Visualization](https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html)
