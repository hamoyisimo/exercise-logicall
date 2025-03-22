#include<stdio.h>
int main ()
{
    int l , c , i , j;

     printf("enter lines : ");
    scanf("%d",&l);
    printf("enter colone : ");
    scanf("%d",&c);

    for ( i = 1 ; i <= l ; i++)
    {  
        for (j = 1; j <= c ; j++)
        {
              if ( i == 1 || j == 1 || i == l || j == c)
        printf("* ");
        else
        printf("  ");
        }
        printf("\n");
    }

   

    
}