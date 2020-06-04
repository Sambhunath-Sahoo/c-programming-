/* Program to find the sum and average of 5 positive integers*/
#include<stdio.h>
#include<math.h>

int main()
{
    int i, sum = 0;
    scanf("%d",&i);
    
    while(i > 0){
        int num ;
        printf("Enter aa number : ");
        scanf("%d",&num);
        if(num < 0){
            printf("enter a positive only number.\n");
            continue;
        }
        sum += num;
      i--;  
    }
    
    printf("the sum of the numbers is %d", sum);

    return 0;
}
