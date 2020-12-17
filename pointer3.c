#include<stdio.h>
void swap()
{
    int a=5,b=7,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);
}
int main()
{
    //int x=2,y=5;
    swap();
    
}