#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int size;
    printf("enter size of dynamic array\n");
    scanf("%d",&size);
    int *arr=(int *)calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        arr[i]=i+1;
    }
    /*printf("%d\n",arr);
    arr[8]=69;*/
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("enter new size of dynamic array\n");
    scanf("%d",&size);
    arr = (int *)realloc(arr,size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        arr[i]=i+1;
        printf("%d\n",arr[i]);
    }

}