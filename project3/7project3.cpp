#include<stdio.h> 
int main(){
	int temperature;
	printf("Enter the Temperature in Celsius:-");
	scanf("%d",&temperature);
	
	if (temperature >= 38){
		printf("Hot\n");
	}else if (temperature >= 20 && temperature < 38){
		printf("Moderate\n");
	}else {
		printf("Cold\n");
	}
}