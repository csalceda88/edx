#include <stdio.h>

int main(void)
{
    int i = 0;
    int m;
    int r = 0;
    scanf("%d", &m);
    for(i = 0; i < 11; i++)
    {
        printf("%dx%d = %d\n", r, m, (r*m));
        r = r + 1;
    }
    return 0;
}

/*In this activity, you want to improve your existing multiplication program (that prints the 8 times table). Your program should read an integer from the user (not you) and print the multiplication table for the number that they enter.*/
