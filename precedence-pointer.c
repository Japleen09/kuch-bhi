#include<stdio.h>
int main()
{
int *x,*y,*ptr;
*ptr=1;
*x=*ptr++;
*y=*x;
return 0;
}
