#include <stdio.h>

int main(void)
{
    int x;
    double a;
    double b;
    scanf("%lf %lf", &a, &b);
    x = (int)(a/b);
    printf("%d", x);
    return(0);
}
