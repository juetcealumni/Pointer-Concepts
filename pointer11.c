#include<stdio.h>
int main()
{
/*1 2 3 4
  5 6 7 8*/

    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    int (*ptr)[4]=b;
    
    printf("%d\n",**b);
    printf("%d\n",b[1][2]);
    printf("%d",*(*(b+1)+2));
}