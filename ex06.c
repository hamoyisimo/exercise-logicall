#include <stdio.h>
int main ()
{
    float m = 1000000 ; 
    float a = 500000;
    int nbr_ans ;
    nbr_ans = 0;
    while (a <= m)
     
       {
             m = m + 50000;
            a = a+(a * 0.08);
            nbr_ans++;
       }  
   printf("agadir dipassera marrakesh apres %d ans :",nbr_ans);
}