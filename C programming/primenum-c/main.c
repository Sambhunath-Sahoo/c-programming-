#include <stdio.h>
#include<math.h>

int main()
{
    int n , i;
    scanf("%d",&n);
    
    for(i =2;i <= sqrt(n);i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    
    if(i>sqrt(n))
    {
        printf("prime number."); 
    }
    else
    {
        printf("not a prime number.");
    }
    
    return 0;
}
