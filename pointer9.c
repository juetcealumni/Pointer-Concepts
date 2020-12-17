#include<stdio.h>
#include<string.h>
int main()
{
    /*char c[5];
    c[0]='j';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    c[4]='\0';
    printf("%s",c);*/
    /*char arr[]={'j','o','h','n','\0'};
    printf("%s",arr);*/
    char arr[]="JOHN";
    printf("%s\n",arr);
    *(arr+2)='A';
    for(int i=0;i<strlen(arr);i++)
    {
        printf("%c  ",arr[i]);
        
    }
    printf("\n%d",strlen(arr));
}