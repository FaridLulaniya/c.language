#include<stdio.h>
int main(){
	int angle;
	printf("Enter the Angle:-");
	scanf("%d",&angle);
	
	if(angle >= 0 && angle < 90){
		printf("First quadrant \n");
	}else if(angle >= 90 && angle < 180){
		printf("Second quadrant \n");
	}else if(angle >= 180 && angle < 270){
		printf("Third quadrant \n");
	}else if(angle >= 270 && angle < 360){
		printf("Fourth quadrant \n");
	}else {
		printf("Your Angle is not Found...");
	}
}