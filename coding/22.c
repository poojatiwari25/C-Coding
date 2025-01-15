#include <stdio.h>

int main() {
   int a,b,c;
   printf("Enter a no: ");
   scanf("%d%d%d",&a,&b,&c);
  if(a<b && a<c)
  {
      printf("A is smaller");
  }
 else if(b<c && b<a)
 {
     printf("B is smaller");
 }
 else if(c<a && c<b)
 {
     printf("C is smaller");
 }
 else if(a==b && a<c)
 {
    printf("A and B are equal and A is smaller"); 
 }
 else if(b==c && b<a)
 {
    printf("B and C are equal and B is smaller"); 
 }
 else if(a==c && a<b)
 {
   printf("A and C are equal and C is smaller"); 
 }
 else{
     printf("All are equal");
 }
   return 0;
}