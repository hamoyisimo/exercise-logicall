#include <stdio.h>
int main ()
{
    int n ; 
    int i ;
    int estpremier = 1 ;
    printf("enter n :");
    scanf("%d",&n);
    for(i = 2 ; i <= n/2  ; i++)
    {
        if (n % i == 0)
        {
           estpremier = 0;
            break;
        }
    }
    if (estpremier == 1)
    printf("%d est un nombre premier",n);
    else
    printf("%d est un nombre non premier",n);
}