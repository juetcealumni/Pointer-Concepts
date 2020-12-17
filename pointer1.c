#include<stdio.h>
int main()
{
    int a=8;
    int *ptr;
    printf("%d\n",&ptr);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    ptr=&a;
    
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    *ptr=10;
    printf("%d\n",a);
    a=12;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);

    

}