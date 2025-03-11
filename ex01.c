#include<stdio.h>
int main ()
{
    int  n ;
    float  s ,i ;
    
    printf("enter a number : ");
    scanf("%d",&n);

    s = 0 ;
   for(i = 1 ; i <= n ; i++)
         s =  s + (1 / i) ;
        printf("la somme est : %.2f\n",s);  
}