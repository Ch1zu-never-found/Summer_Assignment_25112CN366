#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];
 int m=-1;
 int freq2=0;
 printf("enter the string :-");
 fgets(str, sizeof(str), stdin);
for(int i=0;str[i]!='\0';i++)
 {
    int freq=0;
    for(int l=i+1;str[l]!='\0';l++)
    {
        if(str[i]==str[l])
        freq++;
    }
    if(freq>freq2)
    {
        freq2=freq;
        m=i;
    }
 }
 printf("Maximum repeating character is :- %c",str[m]);
 return 0;
}