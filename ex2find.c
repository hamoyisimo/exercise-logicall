#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
    int nombreAlegatoire = 0;
    int n = 0;
    int i = 0; 
    int estcorrect = 0;
const int MAX = 30 , MIN = 1 ;
srand(time(NULL));
nombreAlegatoire = (rand() % ( MAX - MIN +1)) + MIN;

printf("l 'ordinateur choisi un nombre entre 1 et 30. A vous de le deviner en 5 tentetives aux maximum\n");
    do {
        i++;
            printf("quel est le nombre : ");
            scanf("%d",&n);
            
        if (nombreAlegatoire > n )
            printf(" cest plus \n");
        else if (nombreAlegatoire < n)
            printf("cest moins \n");
        else 
        {
           estcorrect = 1;
            break;
        }
    }while(i < 5);

        if (estcorrect == 1)
            printf("bravo! vous avez trouve %d en %d essais ",nombreAlegatoire,i);
      else 
           printf("oups! vous avez depasse les 5 tentevies autorisees. le nombre etait :%d",nombreAlegatoire);

    









}






















