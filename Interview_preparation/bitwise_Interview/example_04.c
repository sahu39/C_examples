/*****Write a program to check an integer is a power of 2?*****/
#include <stdio.h>
int main(){
	int data,flag;
	printf("Enter a data:");
	scanf("%d",&data);
	flag = (data != 0) && (!(data & (data -1)));
	if(flag == 0){
		printf("%d is not divisible by 2\n",data);
	}
	else{
		printf("%d is divisible by 2\n",data);
	}
}
