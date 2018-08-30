#include <stdio.h>


int main()

{
    
char s[5]={'a','e','i','o','u'};
    
char alphabet;
    
int i;
    
printf("enter the alphabet:");
    
scanf("%c", &alphabet);
    
for(i=0;i<5;i++)
    
{
  
    
if(s[i]==alphabet)
    
printf("it is vowel");


else
{
    
printf("it is consonant");

}   
   
    
return 0;

    }