#include<stdio.h>
#include<string.h>
void reverse_letters(char str[], int start, int end);
void reverse(char str[],int start, int end);
int main()
{
    char str[50];
    gets(str);
    reverse_letters(str,0,strlen(str)-1);
    puts(str);
    return 0;
}

void reverse_letters(char str[],int start, int end)
{
    int start_w,end_w;

    for(start_w=end_w=start;end_w<end;end_w++)
    {
        if(str[end_w]==' ')
            continue;
        start_w=end_w;
        while(str[end_w]!= ' ' && end_w<=end)
        {
            end_w++;
        }
        end_w--;
        reverse(str,start_w,end_w);
    }
}
void reverse(char str[],int start, int end)
{
    char tmp;
    while(start<=end)
    {
        tmp=str[start];
        str[start]=str[end];
        str[end]=tmp;
        start++;
        end--;
    }
}
