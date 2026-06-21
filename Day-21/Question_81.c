#include <stdio.h>
int main()
{
    int n;char str[30];int c=0;
    printf("Enter the string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        c++;
    }
    printf("String length : %d\n",c);
    return 0;
}