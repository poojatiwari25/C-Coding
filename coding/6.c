#include <stdio.h>
   int main(){
    int org,n,i,rev,rem;
    printf("Enter a number");
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
    if(org==rev)
    {
        printf("%d is palindrome",org);
    }
    else
    {
        printf("%d is not palindrome",org);
    }
   
    return 0;
   }
   
   
  