#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("enter the string");
    fgets(str, sizeof(str), stdin);
    char ch;
    printf("enter the character whose frequency you want to check:");
    scanf(" %c", &ch);
    int i,freq=0;
    for(i=0;i<50;i++)
    {
        char c=str[i];
        if(c==ch)
        {
            freq=freq+1;
        }
    }
    printf("frequency of the character is %d",freq);
    return 0;

}