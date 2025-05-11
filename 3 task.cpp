#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number :") ; 
	scanf("%d", &num);
	
	printf("post decrement: %d /n",--num);
	printf("after post decrement : %d/n",num--);
	
	printf("pre decrement : %d /n",--num); 
	
	return 0;
}
