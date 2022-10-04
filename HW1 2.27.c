#include <stdio.h>

int main()
{
    // use five prinf statements
    printf("     *\n");
    printf("    ***\n");
    printf("   *****\n");
    printf("  *******\n");
    printf(" *********\n");

    // use one printf statement
    for (int i = 0; i <= 4; i++) 
    {
        for (int j = 0; j <= 4 - i; j++) 
        {
            printf(" ");
        }
        for (int k = 0; k <= i * 2; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

