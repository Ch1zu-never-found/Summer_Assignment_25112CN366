#include <stdio.h>
#include <string.h>
int main()
{
 char str[50], str2[50];
 int m;
 printf("enter the first string :-");
 fgets(str, sizeof(str), stdin);
 printf("enter the second string :-");
 fgets(str2, sizeof(str2), stdin);
 if (strlen(str) != strlen(str2))
    {
        printf("Strings are not anagrams.");
        return 0;
    }
 for(int i=0;str[i]!='\0';i++)
 {
    int freq=1;
    int freq2=0;
    for(int l=i+1;str[l]!='\0';l++)
    {
     if(str[i]==str[l])
     freq++;
    }
  for(int l=0;str2[l]!='\0';l++)
    {
        if(str[i]==str2[l])
        freq2++;
    }
    if(freq2!=freq)
    {
    printf("string is not anagram.");
    return 0;
    }
}
printf("Strings are anagram");
 return 0;
}
