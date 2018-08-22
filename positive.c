#include <stdio.h>
int main()
{
    int number=3;

    printf("Enter a number: ");
    scanf("%lf", &number);

    
    if (number < 0)
        printf("You entered a negative number.");

    
    else  ( number > 0)
        printf("You entered a positive number.");

   
    return 0;
}