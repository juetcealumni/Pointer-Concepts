#include<stdio.h>
int main()
{
    int A[]={2,5,4,3,7,1};
    int *p=A;
    int i;
    A[4]=9;
    for(i=0;i<6;i++)
    {
        printf("%d\n",*(A+i));
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",(A+i));
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",&A[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",A[i]);
    }
}