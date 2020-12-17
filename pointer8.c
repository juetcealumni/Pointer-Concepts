#include<stdio.h>
void Double(int *A,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        A[i]*=2;
    }
}
int main()
{
    int arr[]={2,3,4,8,6,5};
    int size=sizeof(arr)/sizeof(int);
    Double(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(arr+i));
    }
}