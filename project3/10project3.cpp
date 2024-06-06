#include<stdio.h>
int main(){
	
	float amount;
	float rate;
	float time;
	float sum;
	 
	printf("Enter the principal Amount:-");
	scanf("%f",&amount);
	
	printf("Enter the principal Rate:-");
	scanf("%f",&rate);
	
	printf("Enter the principal time:-");
	scanf("%f",&time);
	
sum =(amount*rate*time)/100;
	
	if(sum<0){
		printf("Your value is Nagative i can't see your value");
	}else{
		printf("Your value is Positive\n");
		printf("%.1f",sum);
	}
}