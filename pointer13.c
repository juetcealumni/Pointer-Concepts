#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("enter value of a\n");
    scanf("%d",&a);
    int *p=(int*)malloc(sizeof(int));
    printf("adress of a is %d\n",&a);
    printf("address of pointed adress is %d\n",p);
    p=&a;
    printf("value at the address where the pointer points to is %d\n",*p);
    *p=20;
    printf("value at a is %d\n",a);
    printf("value at the address where the pointer points to is %d\n",*p);
}