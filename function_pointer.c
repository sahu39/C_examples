#include<stdio.h>
int run_function(int (*fun)(int a,int b),int k,int l)
{
    return (*fun)(k,l);
}
int sum(int a, int b)
{
    return a+b;
}
int diff(int a, int b)
{
    return a-b;
}
int main()
{
    printf("Run function sum output %d\n",run_function(sum,5,3));
    printf("Run function diff output %d\n",run_function(diff,2,3));
    return 0;
}
