#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[30],i;
    printf("Enter the string");
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        char ch=str[i];
        if(ch >= 'a' && ch <= 'z')
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("New string is %s\n ",str);
    return 0;

}