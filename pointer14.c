#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p=(int*)malloc(sizeof(int));
    *p=10;
    printf("pointed address is %d\n",p);
    printf("value at pointed address is %d\n",*p);
    int *a=p;
    *p=20;
    printf("pointed address is %d\n",p);
    printf("value at pointed address is %d\n",*p);
    p=(int*)malloc(sizeof(int));
    *p=30;
    printf("pointed address is %d\n",p);
    printf("value at pointed address is %d\n",*p);
    int *b=p;
    printf("value at pointed address is by a %d\n",*a);
    printf("value at pointed address is by b %d\n",*b);
    free(a);
    printf("value at pointed address is by a %d\n",*a);
}