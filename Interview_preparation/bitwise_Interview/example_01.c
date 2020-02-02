/************************The MSB bit of a number defines their sign. If the MSB bit is set, the number will be negative.******/
#include <stdio.h>
int main()
{
	int sign = 0;
	int data = 0;
	int val;
	printf("Enter a number:");
	scanf("%d",&data);
	sign = (data > 0) - (data < 0);
	val = (data > 0);
	printf("val = %d\n",val);
	val = (data < 0);
	printf("val = %d\n",val);
	
	if(sign == 1){
		printf("Entered number is +ve\n");
	}
	else if(sign == -1){
		printf("Entered number is -ve\n");
	}
	else{
		printf("Enterd numbet is 0\n");
	}
	return 0;
}
