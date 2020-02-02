/*****Detect if two integers have opposite signs?****/
#include <stdio.h>
void checkoppositesign(int a, int b){
	if((a ^ b) < 0){
		printf("Both numbers have opposite sign\n");
	}
	else{
		printf("Both numbers have same sign\n");
	}
}

int main(){
	checkoppositesign(10,-20);
	checkoppositesign(100,200);
}

