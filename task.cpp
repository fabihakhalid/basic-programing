#include<stdio.h>

int main()
{
	int num1 , num2 ;
	printf("Enter two integer :");
	scanf("%d",&num1);
	scanf("%d",&num2);
	int sum = num1+num2;
	int diff = num1-num2;
	int product = num1*num2;
	int divide = num1/num2;
	int reminder = num1%num2;
	printf("sum %d", sum );
	printf("diff %d", diff );
	printf("product %d", product );
	printf("divide %d", divide);
	printf("reminder %d", sum );
	
	
	
	return 0;
	
}