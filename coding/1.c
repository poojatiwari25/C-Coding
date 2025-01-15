#include <stdio.h>

int main() {
   int n,i,rem,rev;
   printf("Enter a 3 digit no.");
   scanf("%d",&n);
   while(n>0)
   {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
   }
   printf("%d",rev);
    return 0;
}