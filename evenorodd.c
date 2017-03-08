/*********

Author1 Name:
Author2 Name:

FIXED THE BUGS FOR GIT-WORKSHOP

**********/
#include<stdio.h>

int main(){

    int number;
  
    printf("Enter any integer: ");
    scanf("%d",&number);

	// HERE IS THE BUG, number % 2 == 0 means even
    if(number % 2 == 0)
         printf("%d is even number.",number);
    else
         printf("%d is odd number.",number);
  
    return 0;

}
