#include <stdio.h>
int main()
{
    printf("Enter first Number:");
    int num1;
    scanf("%d",&num1);
    printf("Enter Second Number:");
    int num2;
    scanf("%d",&num2);
    while (1)
    {
    printf("\nMenu:");
    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division");
    printf("\n5-Remainder");
    printf("\n6-Exit");
    printf("\nEnter the Operation to be performed:-");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        int sum=num1+num2;
        printf("\nSum of 2 numbers is %d",sum);
        break;
    case 2:
    int dif=num1-num2;
    printf("\nDifference between the two number is %d",dif);
    break;
    case 3:
    int mul=num1*num2;
    printf("\nThe product of two numbers is %d",mul);
    break;
    case 4:
    int div=num1/num2;
    printf("\nDividing num1 by num2 we get %d",div);
    break;
    case 5:
    int rem=num1%num2;
    printf("\nRemainer after dividing them is %d",rem);
    break;
    case 6:
    printf("Thank you!");
    return 0;
    default:
    printf("Invalid Choice!");
    }
}
return 0;
}