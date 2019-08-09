#include <stdio.h>

int main(void)
{
    int ingredientsNumb = 0;
    scanf("%d", &ingredientsNumb);
    int ingredient;
    double ppp[10];
    double finalprice = 0.0;
    double inputprice = 0.0;
    double quantity;
    int i;
    for(i = 0; i < ingredientsNumb; i++)
    {
        scanf("%lf", &inputprice);
        ppp[i] = inputprice;
    }
    for(ingredient = 0; ingredient < ingredientsNumb; ingredient++)
    {
        scanf("%lf\n", &quantity);
        finalprice = finalprice + ppp[ingredient] * quantity;
    }
    printf("%lf\n", finalprice);
    return 0;
}

/* You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places. */
