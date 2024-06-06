#include<stdio.h>
int main(){
	char a[50];
	printf("Enter Your Name :- ");
	scanf("%[^\n]s",&a);
	printf("%s",a);
	
	int age;
	printf("Enter your Age :- ");
	scanf("%d",&age);
	
	if(age>18){
		
		printf("You are eligible to Vote.\n");
	

		
	}else{
	
	    printf("You are not eligible to vote.");
	    
}
}