#include <stdio.h>

int main(void)
{
    int number;
    int sum;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int i;
    scanf("%d\n", &number);
    sum = 0;
    for(i = 0; i < number; i++)
    {
        scanf("%d %d %d %d\n", &height, &weight, &enginePower, &resistance);
        sum = sum + (enginePower + resistance)*(weight - height);
    }
    printf("%d\n", sum);
    return (0);
}
