#include <stdio.h>
int sum(int n){
   int s=0;
   for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a= sum(n);
    printf("%d",a);
    return 0;
}





