#include<stdio.h>
int main(){
	
	int no;
	printf("Enter any Number:- ");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("Number is Positive.");
	}else if(no<0)
	{
		printf("Number is nagetive.");
	}else{
		printf("ZERO");
	}
}