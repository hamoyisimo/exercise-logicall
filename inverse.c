#include<stdio.h>
int main ()
{
    int n ;
    int inv = 0;
    printf("enter the number : ");
    scanf("%d",&n);
    do {     
        inv = (inv * 10 )+(n % 10);
        n = n / 10;   
    }while(n != 0);
    printf("inverse est : %d",inv);
}