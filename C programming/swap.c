/* swap the 2 number using 3rd variable*/
#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d",&a, &b);
	int temp = a;
	a = b;
	b = temp;
	printf("a = %d , b = %d \n", a, b);
	return 0;
}