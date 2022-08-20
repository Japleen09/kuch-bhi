#include <stdio.h>
void ref(int *x, int *y);
int main()
{
    int a=5,b=6;
    printf("a=%d,b=%d\n",a,b);
    ref(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void ref(int *x,int *y)
{
    (*x)++;
    (*y)++;
    printf("*x=%d,*y=%d\n",*x,*y);
}
