#include<stdio.h>
#include<string.h>
void reverse(char str[]);
int main()
{
    char str[50];
    gets(str);
    puts(str);
    reverse(str);
    return 0;
}

void reverse(char str[])
{
    int i,j;
    char tmp;
    for(i=0,j=strlen(str)-1;i<=j;i++,j--)
    {
        tmp= str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
    printf("reverse string is:");
    for(i=0;i<strlen(str);i++)
    {
    printf("%c",str[i]);
    }
}

