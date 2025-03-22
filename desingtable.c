#include<stdio.h>
int main ()
{
    int l ;
    int c ;
    int i ;
    int j ;
    printf ("enter the colone : ");
    scanf("%d",&c);
    printf ("enter the lines : ");
    scanf("%d",&l);

    for(i = 0 ; i < l ; i++)
    {
         for(j = 0 ; j < c ; j++)
         {
            printf("* ");
         }
        
        printf("\n");
    }
      
        
   

}
