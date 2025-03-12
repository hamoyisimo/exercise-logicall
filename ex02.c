#include<stdio.h>
#include <math.h>
int main()
{
    int n ,i;
   int   s ;
        printf("enter a number :");
        scanf("%d",&n);
        
    s = 0;
    for ( i = 0; i <=n; i++)

    s = s + pow(10 , i );
    printf("la some est : %d",s);

}