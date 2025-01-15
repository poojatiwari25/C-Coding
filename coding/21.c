#include <stdio.h>
int main() {

int i,j,a,b;
printf("enter 1st no.");
scanf("%d",&a);
printf("enter last no.");
scanf("%d",&b); 
for(i=a+1;i<b;i++){
   int c=0;
  for(int j=2;j<i;j++)
  {
      if(i%j==0)
      {
      c++;
        break;
      }
   } 
      if(c==0){
         printf("%d\n",i); 
         
     }
     
}
return 0;

}
