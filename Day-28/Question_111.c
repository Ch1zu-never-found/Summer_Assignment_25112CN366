#include <stdio.h>
#include <string.h>
int main()
{
    int l = 0;
    struct ticket
    {
        int ticketId;
        char passengerName[50];
        float ticketPrice;
        char destination[50];
    };
    struct ticket tk[50];
    while(1)
    {
        printf("\nMenu:-\n");
        printf("1.Book Ticket\n");
        printf("2.Display Tickets\n");
        printf("3.Search Ticket\n");
        printf("4.Update Ticket Price\n");
        printf("5.Cancel Ticket\n");
        printf("6.Exit\n");
        int choice;
        printf("Enter Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter Ticket ID: ");
                scanf("%d",&tk[l].ticketId);
                int found = 0;
                for(int i=0;i<l;i++)
                {
                    if(tk[i].ticketId == tk[l].ticketId)
                    {
                        found = 1;
                        break;
                    }
                }
                if(found)
                {
                    printf("Ticket ID already exists!\n");
                    break;
                }
                getchar();
                printf("Enter Passenger Name: ");
                fgets(tk[l].passengerName,sizeof(tk[l].passengerName),stdin);
                tk[l].passengerName[strcspn(tk[l].passengerName,"\n")] = '\0';
                printf("Enter Ticket Price: ");
                scanf("%f",&tk[l].ticketPrice);
                getchar();
                printf("Enter Destination: ");
                fgets(tk[l].destination,sizeof(tk[l].destination),stdin);
                tk[l].destination[strcspn(tk[l].destination,"\n")] = '\0';
                printf("Ticket Booked Successfully!\n");
                l++;
                break;
            }
            case 2:
            {
                if(l==0)
                {
                    printf("No Ticket Records Found!\n");
                }
                else
                {
                    for(int i=0;i<l;i++)
                    {
                        printf("\nTicket %d\n",i+1);
                        printf("Ticket ID      : %d\n",tk[i].ticketId);
                        printf("Passenger Name : %s\n",tk[i].passengerName);
                        printf("Ticket Price   : %.2f\n",tk[i].ticketPrice);
                        printf("Destination    : %s\n",tk[i].destination);
                    }
                }
                break;
            }
            case 3:
            {
                int id;
                int found = 0;
                printf("Enter Ticket ID: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == tk[i].ticketId)
                    {
                        printf("\nTicket Found\n");
                        printf("Ticket ID      : %d\n",tk[i].ticketId);
                        printf("Passenger Name : %s\n",tk[i].passengerName);
                        printf("Ticket Price   : %.2f\n",tk[i].ticketPrice);
                        printf("Destination    : %s\n",tk[i].destination);
                        found = 1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Ticket Not Found!\n");
                }
                break;
            }
            case 4:
            {
                int id;
                int found = -1;
                float price;
                printf("Enter Ticket ID: ");
                scanf("%d",&id);
                printf("Enter New Ticket Price: ");
                scanf("%f",&price);
                for(int i=0;i<l;i++)
                {
                    if(id == tk[i].ticketId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    tk[found].ticketPrice = price;
                    printf("Ticket Price Updated Successfully!\n");
                }
                else
                {
                    printf("Ticket Not Found!\n");
                }
                break;
            }
            case 5:
            {
                int id;
                int found = -1;
                printf("Enter Ticket ID to Cancel: ");
                scanf("%d",&id);
                for(int i=0;i<l;i++)
                {
                    if(id == tk[i].ticketId)
                    {
                        found = i;
                        break;
                    }
                }
                if(found>=0)
                {
                    for(int i=found;i<l-1;i++)
                    {
                        tk[i] = tk[i+1];
                    }
                    l--;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Ticket Not Found!\n");
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