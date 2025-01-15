#include <stdio.h>

int main() {
int n,i=2;
printf("enter a number: ");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
  break;
}

if(i==n)
printf("prime no is %d",n);
else
printf("not a prime no"); 

return 0;
}