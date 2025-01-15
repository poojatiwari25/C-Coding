#include <stdio.h>
#include<math.h>
int main() {

int x,n,i;
double p1=1;
printf("enter a value of x: ");
scanf("%d",&x);
printf("enter a value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    p1=p1*x;
}
printf("Result is %01f",p1);
return 0;
}