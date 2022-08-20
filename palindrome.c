#include <stdio.h>
#include <string.h>


int main()
{
     char str1[1000],str2[1000];

    printf("Enter  the string: ");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(!strcmp(str1,str2))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");


    return 0;


}
