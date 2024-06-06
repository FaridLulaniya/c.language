#include<stdio.h>
int main(){
     int N;
     printf("Enter any Number:-");
     scanf("%d",&N);
     
     while (N >= 1){
     	if(N % 2 != 0) {
     		printf("%d\t", N);
		 }
		 N--;
	 }
}