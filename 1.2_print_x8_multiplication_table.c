#include <stdio.h>

int main(void)
{
    int i;
    int basenumber = 8;
    int multiplier = 0;
    for(i = 0; i < 11; i++)
    {
        printf("%dx%d = %d\n", multiplier, basenumber,(multiplier*basenumber));
        multiplier = multiplier + 1;
    }
    return 0;
}
