#include <stdio.h>
#include <string.h>
int main()
{
    int l = 0;
    struct account
    {
        int accountNo;
        char name[50];
        float balance;
        char accountType[20];
    };
    struct account ac[50];
    while (1)
    {
        printf("\nMenu:-\n");
        printf("1.Add Account\n");
        printf("2.Display Accounts\n");
        printf("3.Search Account\n");
        printf("4.Deposit Money\n");
        printf("5.Withdraw Money\n");
        printf("6.Exit\n");
        int choice;
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter Account number:-");
            scanf("%d", &ac[l].accountNo);
            int found = 0;
            for (int i = 0; i < l; i++)
            {
                if (ac[i].accountNo == ac[l].accountNo)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                printf("Account already exists!\n");
                break;
            }
            printf("Enter Account holder's name: ");
            getchar();
            fgets(ac[l].name, sizeof(ac[l].name), stdin);
            ac[l].name[strcspn(ac[l].name, "\n")] = '\0';
            printf("Enter Initial Balance: ");
            scanf("%f", &ac[l].balance);
            getchar();
            printf("Enter Account Type: ");
            fgets(ac[l].accountType, sizeof(ac[l].accountType), stdin);
            ac[l].accountType[strcspn(ac[l].accountType, "\n")] = '\0';

            printf("Details Added Successfully!\n");
            l++;
            break;
        }
        case 2:
            if (l == 0)
            {
                printf("No Account records found!\n");
            }
            else
            {
                for (int i = 0; i < l; i++)
                {
                    printf("\nAccount %d\n", i + 1);
                    printf("Account Number       : %d\n", ac[i].accountNo);
                    printf("Holder's Name        : %s\n", ac[i].name);
                    printf("Balance              : %.2f\n", ac[i].balance);
                    printf("Account Type         : %s\n", ac[i].accountType);
                }
            }
            break;
        case 3:
        {
            int id;
            int found = 0;
            printf("Account to be Searched: ");
            scanf("%d", &id);

            for (int i = 0; i < l; i++)
            {
                if (id == ac[i].accountNo)
                {
                    printf("\nAccount Found\n");
                    printf("Account Number       : %d\n", ac[i].accountNo);
                    printf("Holder's Name        : %s\n", ac[i].name);
                    printf("Balance              : %.2f\n", ac[i].balance);
                    printf("Account Type         : %s\n", ac[i].accountType);
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Account Not Found!\n");
            }
            break;
        }
        case 4:
        {
            int id;
            int found = -1;
            float b, f;
            printf("Enter Account no.: ");
            scanf("%d", &id);
            printf("Enter amount to be Deposited: ");
            scanf("%f", &b);
            for (int i = 0; i < l; i++)
            {
                if (id == ac[i].accountNo)
                {
                    f = ac[i].balance;
                    found = i;
                    break;
                }
            }
            if (found >= 0)
            {
                ac[found].balance = f + b;
                printf("Amount Deposited Successfully\n");
            }
            else
            {
                printf("Account Not Found!\n");
            }
            break;
        }
        case 5:
        {
            int id;
            int found = -1;
            float b, f;
            printf("Enter Account no.: ");
            scanf("%d", &id);
            printf("Enter amount to be Withdrawn: ");
            scanf("%f", &b);
            for (int i = 0; i < l; i++)
            {
                if (id == ac[i].accountNo)
                {
                    f = ac[i].balance;
                    found = i;
                    break;
                }
            }
            if (found >= 0)
            {
                if (b <= f)
                {
                    ac[found].balance = f - b;
                    printf("Amount Withdrawn Successfully\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
            }
            else
            {
                printf("Account Not Found!\n");
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