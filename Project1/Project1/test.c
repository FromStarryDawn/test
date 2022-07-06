#define _CRT_SECURE_NO_WARNINGS
#include <stdio.H>
int a = 100;
int main()
{
	int num1 = 0,num2=0;
	int sum = 0;
	scanf("%d %d", &num1,&num2);
	sum = num1 + num2;
	printf("%d\n",sum);
	return 0;
}