#include <stdio.h>
int indexof(int a){
	return (1+(a >> 31)-(-a >> 31));
}

void check(int n){
	char *sign[3] = {"negative","zero","possitive"};
	int val = indexof(n);
	printf("%d is %s\n",n,sign[val]);
}

int main()
{
	check(10);
	check(-1234);
	check(0);
	return 0;
}
