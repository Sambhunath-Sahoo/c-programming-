/*Program to convert a binary number to a decimal number*/
#include<stdio.h>

int main()
{
    int n, dec = 0, j = 1, rem;
    scanf("%d",&n);
    int binary = n;
    while(n>0){
        rem = n %10;
        dec += rem*j;
        j *= 2;
        n = n/10;
    }
    printf("the decimal of %d is %d",binary, dec);
    return 0;
}