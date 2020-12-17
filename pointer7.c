#include<stdio.h>
int ArraySum(int *A,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main()
{
    int arr[]={2,7,9,5,4,0,1};
    int size=sizeof(arr)/sizeof(int);
    int total=ArraySum(arr,size);
    printf("sum of the elements of the array is %d",total);
}