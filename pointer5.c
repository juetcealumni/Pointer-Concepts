#include<stdio.h>
int increment(int *a)
{
    (*a)+=1;
}
int main()
{
    int a=7;
    increment(&a);
    printf("after increment value is %d",a);
}