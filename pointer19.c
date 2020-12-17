#include<stdio.h>
int square(int x)
{
    int y=x*x;
    return y;
}
int main()
{
    int (*result)(int)=square;
    printf("result is %d",result(4)); 
}