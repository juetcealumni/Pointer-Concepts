#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int *p=(int *)calloc(size,sizeof(int));
    int *start=p;
    for(i=0;i<size;i++)
    {
        printf("address of array block[%d] is %d\n",i,p);
        p++;
    }
    for(i=0,p=start;i<size;i++)
    {
        printf("number at block[%d] is %d\n",i,p[i]);
        
    }
    
    printf("enter the numbers---\n");
    for(i=0,p=start;i<size;i++)
    {
        scanf("%d",&p[i]);
        
    }
    for(i=0,p=start;i<size;i++)
    {
        printf("number at block[%d] is %d\n",i,p[i]);
        
    }
}