#include <stdio.h>
int main()
{
    char str[50],rev[50];
    printf("Enter the string");
    scanf("%s",str);
     int i=0;
     int j= strlen(str)-1;
     while(j>=0)
     {
        rev[j]=str[i];
        i++;
        j--;
     }
     rev[i]='\0';
     printf("Reverse of the string is %s ",rev);
     return 0;
    }
    