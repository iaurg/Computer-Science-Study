#include <cs50.h>
#include <stdio.h>

int mario(int height);

int main(void)
{    
    int height;
    // Ask user for input
    do
    {
        height = get_int("Height:");
    }
    while (height > 8 || height < 1);   
    mario(height);
}

int mario(int height)
{
    for (int line = 0; line < height; line++)
    {     
        // Add spaces in the left pyramid
        for (int spaces = 1; spaces < height - line; spaces++)
        {            
            printf(" ");          
        }
        // Print left pyramid
        for (int left = 0; left <= line; left++)
        {            
            printf("#");          
        }
        // Print gap between pyramids
        for (int gap = 0; gap < 2; gap++)
        {
            printf(" ");
        }
        // Print right pyramid
        for (int right = 0; right <= line; right++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 1;
}