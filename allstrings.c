#include<stdio.h>
#include<string.h>
void main ()
{
char str1[100],str2[100],sub;
    printf("Enter  the string: ");
    gets(str1);
    printf("Enter new value for the string:");
    scanf("%s",str2);
    printf("new value of string is: %s\n",str2);
    printf("Length of string is: %d\n",strlen(str1));printf("Length of new string is: %d\n",strlen(str2));
    strcpy(str2,str1);
    strrev(str2);
    if(!strcmp(str1,str2))
 	    printf("\nstring is palindrome");else
        printf("\nstring is not palindrome");
    if(strcmp(str1,str2)==0)
      printf("/Strings are equal\n");else
      printf("/Strings are not equal\n");
  printf("\nLower String is: %s",strlwr(str1));printf("\nLower new String is: %s",strlwr(str2));
  printf("\nUpper String is: %s",strupr(str1));printf("\nUpper new String is: %s",strupr(str2));
  sub=strstr(str1,"programming");printf("\nSubstring is: %s",sub);
  sub=strstr(str2,"programming");printf("\nnew Substring is: %s",sub);
  strcpy(str2,str1);printf("\nValue of  string is: %s",str2);
  strcpy(str1,str2);printf("\nValue of new string is: %s",str1);
   printf("\nReverse String is: %s",strrev(str1));printf("\nReverse new String is: %s",strrev(str2));
}
