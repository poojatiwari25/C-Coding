#include <stdio.h>

int main() 
{
  int a,b,c,total,avg;
  printf("Enter three numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  total=a+b+c;
  avg=total/3;
  printf("The sum of three numbers is %d ",total);
  printf("\nThe average of three numbers is %d ",avg);
  return 0;
}