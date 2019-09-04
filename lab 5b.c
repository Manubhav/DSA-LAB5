#include<stdio.h>
#include<string.h>
char* reverse(char* str);

void main()
{
    char str[100];
    char *rev; 
    printf("Enter the string:");
    gets(str);
    rev = reverse(str);
    printf("The reversed string is: %s", rev);
}

char* reverse(char *str)
{
    static int i = 0;
    static char rev[100];
    if(*str)
    {
        reverse(str+1);
        rev[i++] = *str;
    }
    return rev;
}
