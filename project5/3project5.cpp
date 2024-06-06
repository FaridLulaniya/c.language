#include<stdio.h>
int main(){
	int N;
	int num = 1;
	printf("Enter a Number:-");
	scanf("%d",&N);
	
	while (num <= N) {
		printf("%d\t",num);
		num++;
	}
	
}