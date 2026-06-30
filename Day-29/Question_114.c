#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(1)
    {
        printf("\nMenu:");
        printf("\n1-Display Array");
        printf("\n2-Insert Element");
        printf("\n3-Delete Element");
        printf("\n4-Search Element");
        printf("\n5-Update Element");
        printf("\n6-Exit");
        printf("\nEnter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Array Elements are:\n");
                for(int i=0;i<n;i++)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 2:
            {
                int pos,ele;
                printf("Enter Position: ");
                scanf("%d",&pos);
                printf("Enter Element: ");
                scanf("%d",&ele);

                if(pos<1 || pos>n+1)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(int i=n;i>=pos;i--)
                    {
                        arr[i]=arr[i-1];
                    }

                    arr[pos-1]=ele;
                    n++;
                    printf("Element Inserted Successfully!\n");
                }
                break;
            }
            case 3:
            {
                int pos;
                printf("Enter Position to Delete: ");
                scanf("%d",&pos);
                if(pos<1 || pos>n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(int i=pos-1;i<n-1;i++)
                    {
                        arr[i]=arr[i+1];
                    }
                    n--;
                    printf("Element Deleted Successfully!\n");
                }
                break;
            }
            case 4:
            {
                int ele;
                int found=0;
                printf("Enter Element to Search: ");
                scanf("%d",&ele);
                for(int i=0;i<n;i++)
                {
                    if(arr[i]==ele)
                    {
                        printf("Element Found at Position %d\n",i+1);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Element Not Found!\n");
                }
                break;
            }
            case 5:
            {
                int pos,ele;
                printf("Enter Position: ");
                scanf("%d",&pos);
                if(pos<1 || pos>n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    printf("Enter New Element: ");
                    scanf("%d",&ele);
                    arr[pos-1]=ele;
                    printf("Element Updated Successfully!\n");
                }
                break;
            }
            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}