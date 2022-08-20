#include<stdio.h>
#include<string.h>
void count_char(char str[],char ch);

int main()
{
    char str[50];
    gets(str);
    count_char(str,'a');
    return 0;
}
void count_char(char str[],char ch)
{
    int i,j,count=0;
    for(i=0;i<=strlen(str)-1;i++)
    {
        if (str[i]==ch)
        {

            printf("%d\n",i++);
        }
    }
    printf("occurance of %c in string is %d", ch, count);
}


