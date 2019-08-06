#include <stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    printf("++++%c++++\n", c);
    printf("+++%c%c%c+++\n", c, c, c);
    printf("++%c%c%c%c%c++\n", c, c, c, c, c);
    printf("+%c%c%c%c%c%c%c+\n", c, c, c, c, c, c, c);
    printf("%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c);
    return 0;
}

/*Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
*/
