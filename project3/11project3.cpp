#include<stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	printf("Enter a value of the First Number:- ");
	scanf("%d",&num1);
	printf("Enter a value of the Second Number:- ");
	scanf("%d",&num2);
	printf("Enter a value of the Third Number:- ");
	scanf("%d",&num3);
	
	if(num1 < num2){
		if(num1 < num3){
			printf("%d",&num1);
		}else if (num2 < num1){
			if(num2 < num3){
				printf("%d",&num2);
			}
		}
	}else{
		printf("The Minimum value:- %d",num3);
	}		
}