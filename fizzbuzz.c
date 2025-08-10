#include <stdio.h>

int main()
{
    int num;

    do
    {
       printf("Please enter a random number between 0 and 50,000: ");
       scanf("%d",&num);
    } while (num < 0 || num >50000);

    if (num % 10 == 0)
    {
        printf("Fizzbuzz\n");
    }
    else if (num % 5 == 0)
    {
        printf("buzz\n");
    }
    else if (num % 2 == 0)
    {
        printf("fizz\n");
    }
    else
    {
        printf("%d\n",num);
    }
}