#include<stdio.h>
int StringLength(char *c)
{
    int i,len=0;
    while(*c!='\0')
    {   if(*c!=' ')
            len++;
        c++;
    }
    return len;
}
int main()
{
    char str[]="dibya jyoti mondal";
    int length=StringLength(str);
    printf("the length of the string is %d",length);
}