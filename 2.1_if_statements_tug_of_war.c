#include <stdio.h>

int main(void)
{
    int i;
    int number = 0;
    int sumteam1 = 0;
    int sumteam2 = 0;
    int weight = 0;
    scanf("%d", &number);
    for(i = 0; i < number; i++)
    {
        scanf("%d", &weight);
        sumteam1 = sumteam1 + weight;
        scanf("%d", &weight);
        sumteam2 = sumteam2 + weight;
    }
    int team1win = sumteam1 > sumteam2;
    if(team1win)
    {
        printf("Team 1 has an advantage\n");
    }
    else
    {
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", sumteam1);
    printf("Total weight for team 2: %d\n", sumteam2);
    return 0;
}
