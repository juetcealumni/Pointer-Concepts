#include<stdio.h>
#include<stdlib.h>
//global variable
int c;
void printHello()
{
	printf("hello world!\n");
}
int *add(int *a,int *b)
{
	//in heap
    //int *c=(int *)malloc(sizeof(int));
    c=*a+*b;
    return &c;
}
int main()
{
    int x=7,y=8;
    int *sum =add(&x,&y);
    printHello();
    printf("sum is %d",*sum);
}