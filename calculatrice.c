#include<stdio.h>
#include <math.h>
int main ()
{
    float n ;
    float x ;
    int op ;
    char rep;
    float res ;
do{ 
        printf("-----Calculatrice : Menu ------\n");
        printf("1 - addition.\n");
        printf("2 - soutraction.\n");
        printf("3 - multiplication.\n");
        printf("4 - division.\n");
        printf("5 - reste d'une division entiere.\n ");
        printf("6 - la puissance.\n");
        printf("quel calcule veux -tu effectur ? : ");
        scanf("%d",&op);
        printf("saisir le premier terme : ");
        scanf("%f",&n);
        printf("saisir le deucieme terme : ");
        scanf("%f",&x);
          switch (op)
    {
        case 1 :  printf("le resultat est : %.2f", n + x);
        break;
        case 2 :  printf("le resultat est : %.2f",n - x);
        break;
        case 3 :  printf("le resultat est : %.2f",n * x);
        break;
        case 4 : if (x != 0)
        {
             printf("le resultat est : %.2f",n / x);           
             break;
        } 
        else 
        {
            printf("la division par 0 est impossible");
            break;
        }
        case 5 :  printf("le resultat est : %d",(int)n %(int)x);
        break;
        case 6 :   printf("le resultat est : %.2f",pow (n , x));
        break;
    
    default: printf("l operation est incorrect");
        break;
    }
        printf("\nveux - tu faire un autre calcul : (O/N)? ");
        scanf(" %c",&rep);
    }while (rep != 'N');
  
}