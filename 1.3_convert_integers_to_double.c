#include <stdio.h>
int main(void)
{
    int n;
    int t;
    int i;
    int r = 0;
    double doubler;
    scanf("%d", &n);
    for(i=0; i < n; i++)
    {
        scanf("%d", &t);
        r = r + t;
    }
    doubler = (double) r;
    printf("%.2lf", doubler/n);
    return 0;
}
