#include<stdio.h>
#include<math.h>
int add(int x,int y)
{
    int c=x+y;
    return c;
}
int difference(int x,int y)
{
    int c=abs(x-y);
    return c;
}
int product(int x,int y)
{
    int c=x*y;
    return c;
}
int divide(int x,int y)
{
    int c=x/y;
    return c;
}
int main()
{
    int choice;
    int (*call[])(int,int)={add,difference,product,divide};
    int num1,num2;
    printf("enter two numbers");
    scanf("%d %d",&num1,&num2);
    
    printf("enter 1 to add\nenter 2 to find difference\nenter 3 to multiply\nenter 4 to divide\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        call[choice-1](num1,num2);
        printf("your desired result is %d",(*call[choice-1])(num1,num2));
    }
    else 
    return (-1);
}