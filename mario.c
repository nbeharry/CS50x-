#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);

int main(void)
{
    // prompt the user for pyramid's height
    int height, i, j, k;
    do
    {
        height = get_int("What is the height? ");
    }
    while (height < 1 || height > 8);

    for (i = 0; i < height; i++)
    {
        for (k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
       {
            printf("#");
       }
       printf("\n");
    }
}
