/************Write a program to count set bits in an integer?*********/
#define CHAR_SIZE 8;
#define INT_SIZE (sizeof(int))

#include <stdio.h>
int main(){
	int n;
	int countsetbit = 0;
	int loop =0;
	printf("Enter an Integer:");
	scanf("%d",&n);
	while(n){
		if(loop > (INT_SIZE)-1){
			break;
		}
		countsetbit += (n & 1);
		n = n >>1;
		loop++;
	}
	printf("No. of set bits:%d\n",countsetbit);
	return 0;
}
