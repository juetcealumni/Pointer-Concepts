#include<stdio.h>
int main()
{
    int a;
    int *p;
    int **q;
    int ***r;
    p=&a;
    q=&p;
    r=&q;
    a=5;
    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",&a);
    printf("%d\n",&p);
    printf("%d\n",&q);
    printf("%d\n",&r);
    printf("%d\n",*q);
    printf("%d\n",&*q);
    printf("%d\n",*&p);
    printf("%d\n",*(*(*r)));
    printf("%d\n",*(&(*q)));
}