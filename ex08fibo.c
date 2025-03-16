#include <stdio.h>
int main ()
{
    int n, Ui, Uj , Un , i;    
     
    do{
        printf("enter n :");
        scanf("%d",&n);
    }while (n < 2);
    
      Ui = 0 ;
      Uj = 1;
      printf("U1 = %d\n",Uj);
    for ( i = 2; i <= n; i++)
    {
        Un = Ui + Uj;
         printf("U%d = %d\n",i,Un);
        Ui = Uj;
        Uj = Un;
    } 
}