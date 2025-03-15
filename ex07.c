#include <stdio.h>
int main ()
{
    int n ;
    int Un;
    int i ;
    int Ui ;
    printf("enter n : ");
    scanf("%d",&n);
        Ui = 6;
    for (i = 1; i <= n; i++)
    {
        Un = 4 * Ui + 10;
        Ui = Un;
    }
    printf("U%d = %d",n,Un);

}