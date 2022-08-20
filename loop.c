#include<stdio.h>
int main()
{
int i;
for(i=1;;i++)
{if(i>5)
break;
printf("%d",i);
}
//(ii)
i=1;
for(;;)
{
if(i==5)
break;
printf("%d\n",i);
i++;
}
return 0;
}
