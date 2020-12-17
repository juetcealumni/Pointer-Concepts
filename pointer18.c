#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int (*p)(int,int)=add;//function pointer
    int result=p(2,3);
    printf("the result is %d",result);
}