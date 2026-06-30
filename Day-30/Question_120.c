#include <stdio.h>
#include <string.h>
struct player
{
    char name[50];
    int jerseyNo;
    int age;
    char position[50];
    int goals;
};
struct player Team[100];
int l = 0;
void addPlayer()
{
    printf("Enter Player Name: ");
    getchar();
    fgets(Team[l].name,sizeof(Team[l].name),stdin);
    printf("Enter Jersey Number: ");
    scanf("%d",&Team[l].jerseyNo);
    printf("Enter Age: ");
    scanf("%d",&Team[l].age);
    printf("Enter Position: ");
    getchar();
    fgets(Team[l].position,sizeof(Team[l].position),stdin);
    printf("Enter Goals Scored: ");
    scanf("%d",&Team[l].goals);
    printf("Player Added Successfully!\n");
    l++;
}
void displayPlayers()
{
    if(l==0)
    {
        printf("No Player Records Found!\n");
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            printf("\nPlayer %d\n",i+1);
            printf("Name          : %s",Team[i].name);
            printf("Jersey Number : %d\n",Team[i].jerseyNo);
            printf("Age           : %d\n",Team[i].age);
            printf("Position      : %s",Team[i].position);
            printf("Goals Scored  : %d\n",Team[i].goals);
        }
    }
}
void searchPlayer()
{
    int id;
    int found = 0;
    printf("Enter Jersey Number to Search: ");
    scanf("%d",&id);
    for(int i=0;i<l;i++)
    {
        if(id==Team[i].jerseyNo)
        {
            printf("\nPlayer Found\n");
            printf("Name          : %s",Team[i].name);
            printf("Jersey Number : %d\n",Team[i].jerseyNo);
            printf("Age           : %d\n",Team[i].age);
            printf("Position      : %s",Team[i].position);
            printf("Goals Scored  : %d\n",Team[i].goals);
            found = 1;
        }
    }
    if(found==0)
    {
        printf("Player Not Found!\n");
    }
}
void updateGoals()
{
    int id;
    int found = 0;
    printf("Enter Jersey Number: ");
    scanf("%d",&id);
    for(int i=0;i<l;i++)
    {
        if(id==Team[i].jerseyNo)
        {
            printf("Enter Updated Goals: ");
            scanf("%d",&Team[i].goals);
            printf("Goals Updated Successfully!\n");
            found = 1;
        }
    }
    if(found==0)
    {
        printf("Player Not Found!\n");
    }
}
void deletePlayer()
{
    int id;
    int found = -1;
    printf("Enter Jersey Number to Delete: ");
    scanf("%d",&id);
    for(int i=0;i<l;i++)
    {
        if(id==Team[i].jerseyNo)
        {
            found = i;
            break;
        }
    }
    if(found>=0)
    {
        for(int i=found;i<l-1;i++)
        {
            Team[i]=Team[i+1];
        }

        l--;
        printf("Player Removed Successfully!\n");
    }
    else
    {
        printf("Player Not Found!\n");
    }
}
int main()
{
    while(1)
    {
        printf("\nFootball Team Management System\n");
        printf("1. Add Player\n");
        printf("2. Display Players\n");
        printf("3. Search Player\n");
        printf("4. Update Goals\n");
        printf("5. Delete Player\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addPlayer();
                break;

            case 2:
                displayPlayers();
                break;

            case 3:
                searchPlayer();
                break;

            case 4:
                updateGoals();
                break;

            case 5:
                deletePlayer();
                break;

            case 6:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
