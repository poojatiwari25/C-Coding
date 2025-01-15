#include<stdio.h>
int main ()
{
    int p,t;
    float r,si,A;

    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%d", &t);
  
    si=(p*r*t)/100;
    A=p+si;
    printf("\nSimple Interest is: %.2f",si);
    printf("\nTotal Amount is: %.2f",A);
    return 0;
}