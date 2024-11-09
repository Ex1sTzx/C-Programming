#include <stdio.h>

int main()
{
    int mode;
    float fees, amount;

    printf("Enter your tuition fees : ");
    scanf("%f",&fees);
    printf("Your preffered mode of payment is \n1 for Cash \n2 for Two Installent\n3 for Three Installment\n: ");
    scanf("%d",&mode);

    if (mode==1)
    {
        amount = fees - fees/10;
        printf("The payable amount is %.2f",amount);
    }
      if (mode==2)
    {
        amount = fees*(1+0.05);
        printf("Two installments of %.2f each",amount/2);
    }
      if (mode==3)
    {
        amount = fees*(1+0.1);
        printf("Three installments of %.2f each",amount/3);
    }

    return 0;
}