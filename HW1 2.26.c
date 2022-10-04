#include <stdio.h>

int main()
{
    int x, y;
    printf("input two numbers:\n");
    scanf_s("%d%d",&x,&y);
    if (x%y==0)
    {
        printf("%d is a mutiple of %d",x,y);
    }
    else
    {
        printf("%d is not a mutiple of %d", x, y);
    }
}
