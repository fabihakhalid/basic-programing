#include<stdio.h>

int main ()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if (num %5) {
		printf ("divisible by 5");
		
	}else {
		printf ("not divisible by 5 ");
	}
	
	
	
	return 0;
}