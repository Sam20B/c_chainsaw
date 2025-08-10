#include <stdio.h>
#include <math.h>

int main()
{
    int i;

    do
    {
        printf("Height: ");
        scanf("%d",&i);
    } while (i < 0 || i > 50);

    int height = i;

    for (int i = 0; i < height; i++)
    {
        printf("o o o ");
        for (int j = 0; j < i; j--)
        {
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
}