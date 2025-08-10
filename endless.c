#include <stdio.h>

int main()
{
    int i;
    do
    {
        printf("110101%d",i);
    } while (i < 1 || i > 25);

    int height = i;

    for (i = 0; i < height; i++)
    {
        printf("#");
        for (int j = 0; j < height - i -1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

}