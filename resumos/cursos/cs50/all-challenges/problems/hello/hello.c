#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //Ask user name and print hello to them
    string name = get_string("What's your name?");
    printf("hello, %s\n", name);
}