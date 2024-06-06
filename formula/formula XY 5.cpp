#include<stdio.h>
int main(){

int a = 60;
int b = 50;

a = b+a;
b = a-b;
a  =a-b;
printf("a = %d\n",a);
printf("b = %d",b); 
}