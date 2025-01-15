#include <stdio.h>

int main() {
    int n;
    printf("enter any interger: ");
    scanf("%d",&n);

    if(n<0)
        printf("%d is negative",n);
    else if(n>0)
        printf("%d is positive",n);
    else
        printf("%d is zero",n);

    return 0;
}