#include<stdio.h>

int isPrime(int x)
{
	int i;
	for(i = 2; i <= x - 1; i++)
		if (x%i==0)
		{
			return 0;
		}
return 1;
}

int main()
{

	printf("%d \n", isPrime(7));	
	return 0;
}