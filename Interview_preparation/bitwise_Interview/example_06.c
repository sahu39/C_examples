/******Write an Efficient C Program to Reverse Bits of a Number?*********/
#include <stdio.h>
#define CHAR_BIT_SIZE 8
#define INT_BIT_SIZE (sizeof(int) * CHAR_BIT_SIZE)


int reversebits(int n){
	unsigned int iloop = 0;
	unsigned int tmp = 0;
	unsigned int inumberloop = INT_BIT_SIZE;

	for(; iloop < inumberloop; ++iloop){
		if(n & (1 << iloop)){
			tmp |= 1 << ((INT_BIT_SIZE-1)-iloop);
		}
	}	
	return tmp;
}

int main(){
	int n;
	printf("Enter Number to reverse:");
	scanf("%d",&n);
	
	int reverse_number = reversebits(n);
	printf("After bit reverse of number %x is %x\n",n,reverse_number);
	return 0;
}
