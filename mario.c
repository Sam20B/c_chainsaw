#include <stdio.h>

int main()
{
    int i;
    do
    {
        printf("height: ");
        scanf("%d",&i);
    } while (i < 1 || i > 25);

    int height = i;

    for (i = 0; i < height; i++)
    {
        printf(" ");
        for (int j = 0; j < height - i -1; j++)
        {
            printf("|_|");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}