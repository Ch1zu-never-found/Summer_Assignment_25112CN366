#include <stdio.h>
#include <string.h>
int main()
{
    char str[30],v=0,c=0,i;
    int len=strlen(str);
    printf("Enter the string");
    scanf("%s",str);
    for(i=0;i<len;i++)
    {
        char ch=tolower(str[i]);
        
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
            {
                v++;
            }
            else if(ch >= 'a'&& ch <= 'z')
            {
                c++;
            }
    }
    printf("Count of vowel is %d\n",v);
    printf("Count of consonants is %d\n",c);
    return 0;
}