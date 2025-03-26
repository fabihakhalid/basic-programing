#include<stdio.h>
#include<string.h>

int main(){
	char password[20];
	do{
		printf("enter password :");
		scanf("%s",password);
		
}while (strcmp(password, "confirm password"));
   printf("login");
   printf("confirm password :" );
   
   return 0;
}

	
	
	
	