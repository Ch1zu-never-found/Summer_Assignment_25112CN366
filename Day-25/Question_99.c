#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
 char a[50][50],temp[50];
 int i,j,n;
 printf("enter the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
 scanf("%49s",a[i]);
 }
 for(i=0;i<n-1;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
if(strcmp(a[j],a[j+1])>0)
 {
    strcpy(temp, a[j]);
strcpy(a[j], a[j+1]);
strcpy(a[j+1], temp);
 }
}
 }
 printf("\nSorted array is :\n");
 for(i=0;i<n;i++)
 {
 printf("%s\n",a[i]);
 }
 getch();
}
