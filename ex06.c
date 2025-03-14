#include <stdio.h>
int main ()
{
    int age ; 
    int i ;
    float s ;
    printf("enter age : ");
    scanf("%d",&age);
    s = 0;
    for ( i = 1 ; i <= age ; i++)
    
        s = s +(500 + i * 3);
    
    printf ("la somme est : %.2f dh",s);
}