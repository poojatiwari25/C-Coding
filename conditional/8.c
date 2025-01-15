#include <stdio.h>
int main() {
   char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

if (ch>=65 && ch<=90)
	  printf("Its an uppercase character");

else if(ch>=97 && ch<=122)
      printf("Its an lowercase character");
       
else
	printf("Please enter a valid input");
    
return 0;
}