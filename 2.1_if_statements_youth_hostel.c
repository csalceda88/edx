#include <stdio.h>

int main(void)
{
    int arrival;
    int total = 10;
    int extra;
    int cap = 53;
    scanf("%d", &arrival);
    extra = total+(arrival*5);
    if(arrival == 0)
    {
        printf("%d", total);
    }
    if(extra > cap)
    {
        printf("%d", cap);
    }
    else
    {
       printf("%d", extra);
    }
    return 0;
}
