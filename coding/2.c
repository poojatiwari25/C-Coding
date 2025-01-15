#include <stdio.h>

int main() {
    int n,r,rem,org;
    printf("enter any number");
    scanf("%d",&n);
    org=n;


    while(n>0)
    {
     rem = n%10;
     r+=rem*rem*rem;
     n=n/10;
     
    }
    if (org==r)
        printf("\n%d is an armstrong no",org);
    else
        printf("\n%d is not armstrong no",org);
return 0;
}