#include <stdio.h>
#include <string.h>
int main()
{
    struct item
    {
        int itemId;
        char itemName[50];
        int quantity;
        float price;
    };
    struct item it[100];
    int l = 0;
    while(1)
    {
        printf("\nMenu:");
        printf("\n1.Add Item");
        printf("\n2.Display Items");
        printf("\n3.Search Item");
        printf("\n4.Update Item");
        printf("\n5.Delete Item");
        printf("\n6.Exit");
        printf("\nEnter Choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter Item ID: ");
                scanf("%d",&it[l].itemId);
                int found = 0;
                for(int i=0;i<l;i++)
                {
                    if(it[i].itemId == it[l].itemId)
                    {
                        found = 1;
                        break;
                    }
                }
                if(found)
                {
                    printf("Item ID Already Exists!\n");
                    break;
                }
                getchar();
                printf("Enter Item Name: ");
                fgets(it[l].itemName,sizeof(it[l].itemName),stdin);
                printf("Enter Quantity: ");
                scanf("%d",&it[l].quantity);
                printf("Enter Price: ");
                scanf("%f",&it[l].price);
                printf("Item Added Successfully!\n");
                l++;
                break;
            }
            case 2:
            {
                if(l==0)
                {
                    printf("No Items Found!\n");
                }
                else
                {
                    for(int i=0;i<l;i++)
                    {
                        printf("\nItem %d\n",i+1);
                        printf("Item ID   : %d\n",it[i].itemId);
                        printf("Item Name : %s",it[i].itemName);
                        printf("Quantity  : %d\n",it[i].quantity);
                        printf("Price     : %.2f\n",it[i].price);
                    }
                }
                break;
            }
            case 3:
            {
                int id;
                int found = 0;
                printf("Enter Item ID: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == it[i].itemId)
                    {
                        printf("\nItem Found\n");
                        printf("Item ID   : %d\n",it[i].itemId);
                        printf("Item Name : %s",it[i].itemName);
                        printf("Quantity  : %d\n",it[i].quantity);
                        printf("Price     : %.2f\n",it[i].price);
                        found = 1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Item Not Found!\n");
                }
                break;
            }
            case 4:
            {
                int id;
                int found = -1;
                printf("Enter Item ID: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == it[i].itemId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    getchar();
                    printf("Enter New Item Name: ");
                    fgets(it[found].itemName,sizeof(it[found].itemName),stdin);
                    printf("Enter New Quantity: ");
                    scanf("%d",&it[found].quantity);
                    printf("Enter New Price: ");
                    scanf("%f",&it[found].price);
                    printf("Item Updated Successfully!\n");
                }
                else
                {
                    printf("Item Not Found!\n");
                }
                break;
            }
            case 5:
            {
                int id;
                int found = -1;
                printf("Enter Item ID to Delete: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == it[i].itemId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    for(int i=found;i<l-1;i++)
                    {
                        it[i] = it[i+1];
                    }

                    l--;
                    printf("Item Deleted Successfully!\n");
                }
                else
                {
                    printf("Item Not Found!\n");
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