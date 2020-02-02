/*********Write a program to count set bits in an integer?***********/
#include <stdio.h>

int main(){
	int countsetbit = 0;
	int n;
	printf("Entre the number:");
	scanf("%d",&n);
	while(n){
		n &= (n-1);
		countsetbit++;
	}
	printf("No of set bits:%d\n",countsetbit);
	return 0;
}
