/*
// program to run while
author:john mwendia
reg no:CT101/G/21576/24
*/
# include <stdio.h>
int main (){
	int number;
	// prompt the user to enter the number
	printf("enter number");
	scanf("%d",&number);
	while(number<=50){
		printf("value of number=%d\n",number);
		number ++;
	}
	return 0;
}