#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*1;
    }
    printf("Factorial of %d is: %d",num,fact);
    return 0;
}
