#include <stdio.h>

int main() {
    int n,i;
    printf("enter any number");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("prime no");
    }
    else
    {
    for(i=2;i<n;i++)
    {
     if(n%i==0)
     break;
    }
    if (i==n)
        printf("No is prime");
      else
        printf("\n no is not prime");
    
    }
return 0;
}