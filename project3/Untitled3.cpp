#include<stdio.h>
#include<string.h>
int main(){
	int age;
	int amuont;
	char a[50];
	
    printf("Enter Your Name :- ");
	scanf("%[^\n]s",&a);
	
	printf("Enter your amount for shopping :- ");
	scanf("%d",&amuont);
	
	if(amuont<=100){
	printf("Enter your Age :- ");
	scanf("%d",&age);
	if(age>=18){
		printf("WELCOME TO WEBSITE.\n");
		
    char *items[]= {"Maggie","Khakhra","Milk","Bred"};
    int price[50];
    int total = 0;
    
    for(int i=0; i<4; i++){
    	printf("Enter Of price %s is :- ",items[i]);
    	scanf("%d",&price[i]);
    	total += price[i];
	}
    if(total<=100){
	printf("\n%s Your Total is %d\n\n",a,total);
	printf("THANK YOU FOR SHOPPING");
}else{
	printf(" YOUR AMOUNT IS BIGGER THAN 100 SO GOOD BYE");
}

	}else{
		printf("GOOD BYE.");
	}  
}else{
	printf("YOUR AMOUNT IS BIGGER THAN 100 PLEASE RETRY");
}
}  