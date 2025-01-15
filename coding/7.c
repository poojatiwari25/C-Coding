#include <stdio.h>
int palindrome(int n){
    int rem,rev=0,org;
    org=n;
    while(n>0){
       
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    return org==rev;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(palindrome(n)){
        printf("%d is palindrome",n);
    }
    else{ 
        printf("%d is not palindome",n);
    }

    return 0;
}





