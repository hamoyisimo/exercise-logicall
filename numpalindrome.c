#include <stdio.h>
int main ()
{
    int n;
    int p;
    int inv = 0;
   
    printf("enter the number : ");
    scanf("%d",&n);
     p = n ;
        do {     
            inv = (inv * 10 )+(n % 10);
            n = n / 10; 
           }while(n != 0);
            if(p == inv)
                   printf("%d est palindrome :",p);  
            else
                    printf("%d est non palindrome ",p);
}