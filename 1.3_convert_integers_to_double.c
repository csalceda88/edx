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

/* You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two decimal places. */
