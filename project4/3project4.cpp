#include<stdio.h>

int main(){
	int unit;
	float charges;
	float value;
	float fin_amu;
	scanf("%d",&unit);
	if(unit <= 50 ){
		charges = 0.50*unit;
		printf("%f",charges);
		charges = 0.75*(unit - 50) + 25;
	}else if(unit <= 250){
		charges = 1.20*(unit - 150) + 100;
		printf("%f",charges);
		
}else{
	charges = 1.50*(unit - 250)+320;
	printf("%f",charges);
}

}
