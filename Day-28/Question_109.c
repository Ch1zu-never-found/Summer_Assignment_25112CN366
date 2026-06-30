#include <stdio.h>
#include <string.h>
int main()
{
    struct book
{
    int bookId;
    char title[50];
    char author[50];
    char publisher[50];
    float price;
};
struct book Book[100];
int l = 0;
int id;
 while(1)
    {
    printf("Menu:-\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\nEnter Choice:-");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter Title:-");
        getchar();
        fgets(Book[l].title, sizeof(Book[l].title), stdin);
        printf("Enter Author's name:-");
        fgets(Book[l].author, sizeof(Book[l].author), stdin);
        printf("Enter BookId:-");
        scanf("%d",&Book[l].bookId);
        printf("Enter publisher name:-");
        getchar();
        fgets(Book[l].publisher, sizeof(Book[l].publisher), stdin);
        printf("Enter price of the book:-");
        scanf("%f",&Book[l].price);
        printf("Details stored successfully!");
        l++;
        break;
        case 2:
        if(l==0)
        {
            printf("No Record of the book found !");
        }
        else
        {
         for(int i=0;i<l;i++)
         {
         printf("\nBook %d:-\n", i + 1);
         printf("Title          : %s\n", Book[i].title);
         printf("Author         : %s\n", Book[i].author);
         printf("BookId         : %d\n", Book[i].bookId);
         printf("Publisher      : %s\n", Book[i].publisher);
         printf("Price          :%f\n",Book[i].price);
         }
        }
        break;
        case 3:
        int found=0;
        printf("Enter the bookId of the book to be searched");
        scanf("%d",&id);
        for (int i = 0; i < l; i++)
        {
            if(id==Book[i].bookId)
         {
         printf("\nBook %d:-\n", i + 1);
         printf("Title          : %s\n", Book[i].title);
         printf("Author         : %s\n", Book[i].author);
         printf("BookId         : %d\n", Book[i].bookId);
         printf("Publisher      : %s\n", Book[i].publisher);
         printf("Price          :%.2f\n", Book[i].price);
         found =1;
         }
        }
        if(found==0)
        {
            printf("Book not found!");
        }
        break;
        case 4:
        printf("Thank you!");
         return 0; 
        break;
        default:
        printf("INVALID CHOICE!");
        break;
    }
}
}
