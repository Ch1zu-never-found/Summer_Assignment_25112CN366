#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the lenght of the first array:-");
    scanf("%d",&n);
    printf("Enter the lenght of the second array:-");
    scanf("%d",&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
   int temp[n+m];
   int t;
   for(int i=0;i<n-1;i++)
 {
 for(int j=0;j<n-i-1;j++)
 {
if(a[j]>a[j+1])
 {
 t=a[j];
 a[j]=a[j+1];
 a[j+1]=t;
 }
}
 }
 for(int i=0;i<m-1;i++)
 {
 for(int j=0;j<m-i-1;j++)
 {
if(b[j]>b[j+1])
 {
 t=b[j];
 b[j]=b[j+1];
 b[j+1]=t;
 }
}
 }
 for(int i=0;i<n+m;i++)
 {
    if(i<n)
    temp[i]=a[i];
    else
    temp[i]=b[i-n];
 }
 for(int i=0;i<m+n-1;i++)
 {
 for(int j=0;j<m+n-i-1;j++)
 {
if(temp[j]>temp[j+1])
 {
 t=temp[j];
 temp[j]=temp[j+1];
 temp[j+1]=t;
 }
}
 }
for (int i = 0; i < m+n; i++)
{
    printf("%d",temp[i]);
}
}
