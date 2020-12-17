#include<stdio.h>
int main()
{
    int arr[4][3][2];
    int (*ptr)[3][2]=arr;
    int i,j,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("the[%d][%d][%d]element is %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",**ptr);
    printf("%d\n",*(*(*(ptr+2)+1)+1));

}