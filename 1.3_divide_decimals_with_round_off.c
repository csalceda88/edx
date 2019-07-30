#include <stdio.h>

int main(void)
{
    int i = 0;
    double x;
    scanf("%lf", &x);
    i = (int) (x/120+1);
    printf("%d", i*45);
    return(0);
}
