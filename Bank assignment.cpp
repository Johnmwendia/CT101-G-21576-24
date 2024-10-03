/*
Name:John Mwendia Maina
Reg no:CT101/G/21576/24
*/

#include<stdio.h>
int main(){
	
	int age;
	float annual_income;
	
	printf("please enter age:");
	scanf("%f",&age);
	
	printf("please enter annual_income:");
	scanf("%f",&annual_income);
	
	if(age>=21 and annual_income>=21000){
		printf("congratulations you qualify for a loan");
	}
	else{
		printf("unfortunately, we are unable to offer you a loan at this time");
	}
	return 0;
}
