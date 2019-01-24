#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *x=(char *)malloc(10*sizeof(char));
    x[10]='b';
    return 0;
}
