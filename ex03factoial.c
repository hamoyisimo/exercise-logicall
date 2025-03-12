#include <stdio.h>
int main ()
{
    int n ;
    float   f,i;
    printf("enter a number :");
    scanf("%d",&n);
    
        f = 1;
    if(n > 0)
    {
        for (i = 1; i <= n; i++){
              f = f * i ;

        }
            
       printf( "factorial de %d is  : %.2f",n,f);
    }
       else if ( n == 0){
            printf("1");
        }
    else if ( n < 0)
        printf("veullez entre positive number : ");
     
      
    
}