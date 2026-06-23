#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];
 int m;
 printf("enter the string :-");
 fgets(str, sizeof(str), stdin);
 for(int i=0;i<50;i++)
 {
    int freq=0;
    for(int l=i+1;l<50;l++)
    {
        if(str[i]==str[l])
        freq++;
        m=i;
    }
    if(freq==0)
    {
         printf("first non-repeating character is :- %c",str[i]);
    break;
    }
 }
}
