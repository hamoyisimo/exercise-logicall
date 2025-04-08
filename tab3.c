#include<stdio.h>
int main ()
{
    float t [10];
    int i ;
    float s , p , m;

     printf("Veuilez saisir elements du tableau :\n");
    for (i = 0 ; i < 10 ; i++)
    {
       printf("t[%d]= ",i);
       scanf("%f",&t[i]);
    }
    s = 0 ;
    p = 1;
    for (i = 0 ; i < 10 ; i++)
    {
        s = s + t[i];
        p = p * t[i];
        m =  s / 10;
    }
        printf("la somme est : %.2f\n",s);
        printf("le produit  est : %.2f\n",p);
        printf("la moyenne est : %.2f\n",m);

}