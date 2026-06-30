#include <stdio.h>
#include <string.h>
int main()
{
    int l = 0;
    struct contact
    {
        int contactId;
        char name[50];
        char phone[20];
        char email[50];
    };
    struct contact c[50];
    while(1)
    {
        printf("\nMenu\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        int choice;
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
{
    printf("Enter Contact ID: ");
    scanf("%d",&c[l].contactId);

    int found = 0;
    for(int i=0;i<l;i++)
    {
        if(c[i].contactId == c[l].contactId)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Contact Already Exists!\n");
        break;
    }

    printf("Enter Name: ");
    getchar();
    fgets(c[l].name,sizeof(c[l].name),stdin);

    printf("Enter Phone Number: ");
    fgets(c[l].phone,sizeof(c[l].phone),stdin);

    printf("Enter Email: ");
    fgets(c[l].email,sizeof(c[l].email),stdin);

    printf("Contact Added Successfully!\n");
    l++;
    break;

}
            
            case 2:
            {
                if(l==0)
                {
                    printf("No Contacts Found!\n");
                }
                else
                {
                    for(int i=0;i<l;i++)
                    {
                        printf("\nContact %d\n",i+1);
                        printf("Contact ID   : %d\n",c[i].contactId);
                        printf("Name         : %s\n",c[i].name);
                        printf("Phone Number : %s\n",c[i].phone);
                        printf("Email        : %s\n",c[i].email);
                    }
                }
                break;
            }
            case 3:
            {
                int id;
                int found = 0;
                printf("Enter Contact ID: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == c[i].contactId)
                    {
                        printf("\nContact Found\n");
                        printf("Contact ID   : %d\n",c[i].contactId);
                        printf("Name         : %s\n",c[i].name);
                        printf("Phone Number : %s\n",c[i].phone);
                        printf("Email        : %s\n",c[i].email);
                        found = 1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Contact Not Found!\n");
                }
                break;
            }
            case 4:
            {
                int id;
                int found = -1;
                printf("Enter Contact ID: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == c[i].contactId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    getchar();
                    printf("Enter New Name: ");
                    fgets(c[found].name,sizeof(c[found].name),stdin);
                    c[found].name[strcspn(c[found].name,"\n")] = '\0';
                    printf("Enter New Phone Number: ");
                    fgets(c[found].phone,sizeof(c[found].phone),stdin);
                    c[found].phone[strcspn(c[found].phone,"\n")] = '\0';
                    printf("Enter New Email: ");
                    fgets(c[found].email,sizeof(c[found].email),stdin);
                    c[found].email[strcspn(c[found].email,"\n")] = '\0';
                    printf("Contact Updated Successfully!\n");
                }
                else
                {
                    printf("Contact Not Found!\n");
                }
                break;
            }
            case 5:
            {
                int id;
                int found = -1;
                printf("Enter Contact ID to Delete: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == c[i].contactId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    for(int i=found;i<l-1;i++)
                    {
                        c[i] = c[i+1];
                    }
                    l--;
                    printf("Contact Deleted Successfully!\n");
                }
                else
                {
                    printf("Contact Not Found!\n");
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