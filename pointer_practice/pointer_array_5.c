#include<stdio.h>

#ifdef METHOD_1
int n = 3;
void print(int arr[][n], int m)
{
#endif
#ifdef METHOD_2
void print(int *arr,int m,int n)
{
#endif
#ifdef METHOD_3
void print(int *arr[],int m,int n)
{
#endif
    int i,j;
    for(i = 0;i<m;i++)
    {
        for(j = 0;j<n;j++)
#if defined METHOD_1
            printf("%5d ",arr[i][j]);
#else
            printf("%5d ",*((arr+i*n)+j));
#endif
        printf("\n");
    }

}

int main()
{
    int arr[][3] = {
                    {10,11,12},
                    {20,21,22},
                    {30,31,32}
                   };
#ifdef METHOD_1
    print(arr,3);
#endif
#ifdef METHOD_2
    print((int *)arr,3,3);
#endif
#ifdef METHOD_3
    print((int **)arr,3,3);
#endif

    return 0;
}
