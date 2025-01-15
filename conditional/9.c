#include <stdio.h>
int main() {
   char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || 
	ch == 'u' || ch == 'U')
	  printf("ITs a vowel",ch);

else if(ch>=48 && ch<=57)
       printf("Its a digit");
       
else if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
       printf("Its a special symbol");
       
else
	printf("Its a consonant", ch);
    
return 0;
}