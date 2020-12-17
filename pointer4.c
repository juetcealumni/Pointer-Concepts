#include<stdio.h>
int increment(int a)
{
    
    printf("%d\n",&a);
    a+=1;
    //return a;
}
int main()
{
    int a=7;
    printf("%d\n",&a);
    a=increment(a);
    printf("%d\n",a);
}