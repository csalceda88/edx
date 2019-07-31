#include <stdio.h>

int main(void)
{
    int dice1;
    int dice2;
    int sum;
    scanf("%d\n", &dice1);
    scanf("%d\n", &dice2);
    sum = dice1 + dice2;
    if(sum >= 10)
        printf("Special tax\n36");
    else
        printf("Regular Tax\n%d\n", sum*2);
    return 0;
}
