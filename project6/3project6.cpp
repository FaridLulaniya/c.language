#include<stdio.h>
int main(){
	int n;
	int a = 2;
	
	printf("Enter The Number:-");
	scanf("%d",&n);
	
	do{
   		printf("%d\t",a);
		a += 2;
	}	while (a <= n);
}