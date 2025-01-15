#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter two number");
   scanf("%d%d",&a,&b);
   printf("Before swapping a is %d and b is %d",a,b);
   a=a-b;
   b=a+b;
   a=b-a;
   printf("\nAfter swapping a is %d and b is %d",a,b);

    return 0;
}