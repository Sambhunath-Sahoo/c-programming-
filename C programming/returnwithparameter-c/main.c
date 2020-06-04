/*Program to find the sum of digits of any number*/

#include<stdio.h>

int sum(int n);

int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	printf("Sum of digits of %d is %d\n", n, sum(n));
	return 0;
}
int sum(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10; 		/*Skip the last digit of number*/
	}
	return sum;
}
