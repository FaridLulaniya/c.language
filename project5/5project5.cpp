#include<stdio.h>
int main(){
	int startYear;
	int lastYear;
	
	printf("Enter The Start Year:-");
	scanf("%d",&startYear);
	
	printf("Enter The Last Year:-");
	scanf("%d",&lastYear);
	
	while(startYear <= lastYear){
		if((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)){
			printf("%d\t",startYear);
		}
		startYear++;
	}
	
}