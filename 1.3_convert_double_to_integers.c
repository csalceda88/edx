#include <stdio.h>

int main(void) 
{
    int c, f;
    double g, fu;
    scanf("%d", &c);
    scanf("%lf", &g);
    fu = c * (1 + g / 100);
    f = (int) fu;
    printf("%d", f);
    return(0);
}
