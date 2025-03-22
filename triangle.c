#include<stdio.h>
int main ()
{
    int l ;
    int i ;
    int j;
    printf ("enter the lines : ");
    scanf("%d",&l);
    for(i = 1 ; i <= l ; i++)
    {
         for(j = 1 ; j <= i ; j++)
         {
            printf("* ");
         }
        printf("\n");
    }
}
