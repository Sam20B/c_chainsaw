#include <stdio.h>

int main()
{
    char answer[3];

    printf("Convert to:(KSH or USD) ");
    scanf("%s",&answer);

    int KSH;
    int USD;

    if(answer == KSH)
    {
        printf("Amount in ksh: ");
        scanf("%d",&KSH);

        printf("ksh %d is equivalent to %d dollars\n",KSH,KSH / 150);
    }
    else if(answer == USD);
    {
        printf("Amount in dollars: ");
        scanf("%d",&USD);

        printf("%d dollars is eqivalent to ksh %d\n",USD,USD * 150);
    }
}