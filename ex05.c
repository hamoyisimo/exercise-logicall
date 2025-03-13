#include <stdio.h>
int main ()
{
    int n ; 
    int i ;

    do {
         printf("enter a number positive : ");
    scanf("%d",&n);
    }while(i <= 0);
        for (i = 1 ; i <= n; i++)
        {
            if ( n % i == 0)
            printf("%d\n",i);
        }    
}
    
   
    

