#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter your name please: ");
    scanf("%[^\n]",&name);

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age>20)
    {
        printf("Welcome to Sam's club %s \n",name);
        printf("Enjoy your night!\n");
    }
    else
    {
        printf("Sorry %s, Only peole above the age of 20 are allowed inside\n",name);
    }
}