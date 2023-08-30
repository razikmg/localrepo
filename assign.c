	
/*
Title       : Write a program to check whether a given number is odd or even and its signedness.
Author      : Mahamad Razik
Date        : 30-08-2023
Description :
          Input  - Read the number from the user
          Output - Print if the entered number is postive odd/even or negative odd/even
                   Sample output:- Enter the value of 'n' : -4
                                   -4 is -ve even number
                                   Do you want to continue(y/Y): y
                                   Enter the value of 'n' : 4
                                   4 is +ve even number
                                   Do you want to continue(y/Y): y
                                   Enter the value of 'n' : 2000000
                                   Number out of range
                                   Do you want to continue(y/Y): y
                                   Enter the value of 'n' : 0
                                   0 is neither odd nor even
                                   Do you want to continue(y/Y): n
*/
#include <stdio.h>
int main()
{
    //Declare required variables
    int num, i;
    int res = 1;
    char option;
    for(i = 0; i < 20; i++)     
    {
        res = res * 2;
    }
    do
      {
        //Read input from the user
        printf ("Enter the value of 'num' : ");
        scanf ("%d", &num);
        //Validate if the given user input -2^20 < 'num' < 2^20    
        if ( num > -res && num < res )
        //Logic to check if the user input is +ve odd/even or -ve odd/even
        {
            if ( num > 0 )
            {
                if ( num % 2 == 0 )
                {
                    printf ("%d is +ve even number\n", num);
                }  
                else
                {
                    printf ("%d is +ve odd number\n", num);
                } 
            }   
            else if ( num < 0 )
            {
                if ( num % 2 == 0 )
                {
                    printf ("%d is -ve even number\n", num);
                }
                else
                {
                    printf ("%d is -ve odd number\n", num);
                } 
            } 
            else
            {
                 printf ("0 is neither odd nor even\n");
            }
        }
        else
        {
            printf ("Entered number %d is out of range\n", num);
        }
    //Implement the continue option
    printf("Do you want to continue? (Y|N):");
    getchar();  
    scanf("%c", &option);
    } while ( option == 'y' || option == 'Y');
    return 0;
}
