#include<stdio.h>

int main(){
	float principle,rate,time,interest;
	printf("enter principle:");
	scanf("%f",&principle);
	
	printf("enter rate:");
	scanf("%f",&rate);
	
	printf("enter time:");
	scanf("%f",&time);
	
	interest=(principle*rate*time)/100;
	printf("the interest is:%f",interest);
	
	return 0;
}