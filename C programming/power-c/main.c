// find x^y 
#include<stdio.h>

int main()
{
    int res = 1, x , y;
    int a, b;
    scanf("%d%d",&x,&y);
    a = x; b = y;
    while(b!=0)
    {
        if(b%2==0)
        {
            a = a*a;
            b = b/2;   
        }
        else
        {
            res = res *a;
            b = b-1;
        }
    }
    
    printf("%d",res);
    
    return 0;
}