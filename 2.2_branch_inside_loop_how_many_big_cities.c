#include <stdio.h>

int main(void)
{
    int numcities;
    scanf("%d", &numcities);
    int population;
    int pluspopulation = 0;
    int i;
    for(i = 0; i < numcities; i++)
    {
        scanf("%d", &population);
        if(population > 10000)
        {
            pluspopulation = pluspopulation + 1;
        }
    }
    printf("%d", pluspopulation);
    return 0;
}

/* You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers). */ 
