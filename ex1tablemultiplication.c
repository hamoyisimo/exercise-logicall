#include <stdio.h>
int main ()
{
    int i, j;
    printf("x*y |");
    
    for (i = 1 ; i <= 10; i++)
        printf("%d  ",i);
         printf("\n");
    for (i = 1 ; i <= 18 ; i++)
        printf("--");
         printf("\n");

    for(i = 1 ; i <= 10; i++)
    {
        printf("%d   |",i);
    
    for( j = 1 ;  j <= 10; j++)
    {
      printf("%d ",i * j);
    }
     
    printf("\n");
    } 
}