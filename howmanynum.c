#include <stdio.h>
int main ()
{
    long n ;
    int nbr = 0 ;
    printf("Enter the number : ");
    scanf("%ld",&n);
    do{
        nbr++;
        n = n / 10;
        } while (n != 0);
        printf("Total number of digits is : %d",nbr);
    
}