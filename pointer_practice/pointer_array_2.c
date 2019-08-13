#include<stdio.h>
int main()
{
    int *p;
    int (*ptr)[5];

    int arr[5] = {1,2,3,4,5};
    p = arr;
    ptr = &arr;

    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);

    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",sizeof(ptr), sizeof(*ptr)); 

    return 0;
}
