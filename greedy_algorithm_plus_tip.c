#include <stdio.h>
#include <math.h>

int main()
{
    int shillings,tip;

    //input change owed and tip//
    do
    {
       printf("Change owed: ");
       scanf("%d",&shillings); 

       printf("Tip: ");
       scanf("%d",&tip);
    } while (shillings < 0 || tip < 0);

    //calculate shillings left after tip//
    shillings = shillings - tip;

    //calculate tax charged and rounds off to the nearest integer//
    int tax = (shillings * 8 / 100);
    printf("tax: %d\n",tax);
    shillings = shillings - tax;

    //calculate number of a thousand notes//
    int thousand_notes = shillings / 1000;
    printf("Thousand notes: %d\n",thousand_notes);
    shillings = shillings - thousand_notes * 1000;

    //calculate number of five hundred notes//
    int five_hundred_notes = shillings / 500;
    printf("five hundred notes: %d\n",five_hundred_notes);
    shillings = shillings - five_hundred_notes * 500;

    //calculate number of two hundred notes//
    int two_hundred_notes = shillings / 200;
    printf("two hundred notes: %d\n",two_hundred_notes);
    shillings = shillings - two_hundred_notes * 200;

    //calculate number of one hundred notes//
    int one_hundred_notes = shillings / 100;
    printf("one hundred notes: %d\n",one_hundred_notes);
    shillings = shillings - one_hundred_notes * 100;

    //calculate number of fifty shilling notes//
    int fifty_notes = shillings / 50;
    printf("fifty notes: %d\n",fifty_notes);
    shillings = shillings - fifty_notes * 50;

    //calculate number of twenty shilling coins//
    int twenty_coins = shillings / 20;
    printf("twenty shilling coins: %d\n",twenty_coins);
    shillings = shillings - twenty_coins * 20;

    //calculate number of ten shilling coins//
    int ten_coins = shillings / 10;
    printf("ten shilling coins: %d\n",ten_coins);
    shillings = shillings - ten_coins * 10;

    //calculate number of five shilling coins//
    int five_coins = shillings / 5;
    printf("five shilling coins: %d\n",five_coins);
    shillings = shillings - five_coins * 5;

    //calculate number of one shilling coins//
    int one_coins = shillings / 1;
    printf("one shilling coins: %d\n",one_coins);
    shillings = shillings - one_coins * 1;

    return (0);
}
