#include <stdio.h>

int main(void)
{
    int passangers;
    double cpp = 0;
    scanf("%d %lf", &passangers, &cpp);
    int cost = passangers == 0;
    if(cost)
    {
        printf("%.2lf", cpp);
    }
    else
    {
        cpp = cpp +1;
        printf("%.2lf", cpp/(passangers + 1));
    }
    return 0;
}
