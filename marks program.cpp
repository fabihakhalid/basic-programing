#include<stdio.h>

int main(){
	
	int marks;
	printf("enter your marks: \n");
	scanf("%d" , &marks);
	
	switch(marks){
		case 80:
			printf("a");
			break;
			case 2:
			printf("90");
			break;
			case 3:
			printf("80");
			break;
			case 4:
			printf("70");
			break;
			case 5:
			printf("60");
			break;
			defult:
				printf("you are fail");
	}
	
	return 0;
	
}