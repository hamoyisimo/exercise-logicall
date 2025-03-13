#include <stdio.h>
#include <math.h>
int main ()
{
   int n  ;
    float  i , j , s ;
    printf("enter number :");
    scanf("%d",&n);
    s = 0;
    j = 1;
        for (i = 1; i <= n; i++)
        {
             s = s + pow(j,2);
             j = j + 2;
        }              
        printf("la somme est : %.2f",s);   
}