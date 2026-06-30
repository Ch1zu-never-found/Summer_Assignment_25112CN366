#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter First String: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';
    printf("Enter Second String: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';
    while(1)
    {
        printf("\nMenu:");
        printf("\n1-Length of First String");
        printf("\n2-Copy First String");
        printf("\n3-Concatenate Strings");
        printf("\n4-Compare Strings");
        printf("\n5-Reverse First String");
        printf("\n6-Exit");
        printf("\nEnter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int len = strlen(str1);
                printf("Length of First String = %d\n",len);
                break;
            }
            case 2:
            {
                char copy[100];
                strcpy(copy,str1);
                printf("Copied String = %s\n",copy);
                break;
            }
            case 3:
            {
                char temp[200];
                strcpy(temp,str1);
                strcat(temp,str2);
                printf("Concatenated String = %s\n",temp);
                break;
            }
            case 4:
            {
                int result = strcmp(str1,str2);

                if(result==0)
                    printf("Both Strings are Equal\n");
                else
                    printf("Both Strings are Not Equal\n");

                break;
            }
            case 5:
            {
                char rev[100];
                strcpy(rev,str1);
                int n = strlen(rev);
                for(int i=0;i<n/2;i++)
                {
                    char temp = rev[i];
                    rev[i] = rev[n-i-1];
                    rev[n-i-1] = temp;
                
                printf("Reversed String = %s\n",rev);
                break;
            }
        }
            case 6:
                printf("Thank You!");
                return 0;

            default:
                printf("Invalid Choice!");
        }
    }
    return 0;
}
