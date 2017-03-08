/*********

Author1 Name:Akhi
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include <stdio.h>
 
void main()
{
    long num, temp, digit, sum = 0;
 
    printf("Enter the number \n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
		
		// HERE IS THE BUG, n SHOULD BE DIVIDED BY 10 ON EACH ITERATION, NOT BY 100
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
