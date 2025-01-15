#include <stdio.h>

int main() {
   int n,c=0,i;
   printf("enter a number: " );
   scanf("%d",&n);
   printf("All the factors:");
   for(i=1;i<=n;i++)
   {
     if(n%i==0){
      printf("%d ",i);
      c++;
      }
  }
  printf("\nTotal factors : %d",c);
    return 0;
}