#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char str2[50];
     printf("enter the first string :-");
 scanf("%49s", str);
 printf("enter the second string :-");
scanf("%49s", str2);
 char sc[100];
 int l=0;
 for(int i=0;str[i]!='\0';i++)
 {
    sc[i]=str[i];
    l=i+1;
 }
 for(int i=0;str[i]!='\0';i++)
 {
    sc[l+i]=str[i];
 }
 sc[2*l]='\0';
 for(int i=0;i<l;i++)
 {
    int freq=0;
    for(int j=0;j<l;j++)
    {
        if(sc[i+j]==str2[j])
        {
            freq++;
        }
    }
    if(freq==l)
    {
        printf("string rotation is found at %d",i);
        return 0;
    }
}
printf("not a rotation");
}