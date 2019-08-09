#include <stdio.h>

int main(void)
{
    int number = 0;
    scanf("%d", &number);
    int i;
    int x;
    for(i = 0; i < number; i++)
    {
        for(x = 0; x < number; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/* Create a program that displays on the screen a square of n x n stars, with the integer n given as an input. */ 
