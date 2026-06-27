#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    int roll;
    printf("Enter Student's name: ");
    scanf("%s", name);
     printf("Enter roll number:-: ");
    scanf("%d",&roll );
    int maths,physics,chemistry,english,computers;
    printf("Enter the marks of physics:-");
    scanf("%d",&physics);
     printf("Enter the marks of maths:- ");
    scanf("%d",&maths);
     printf("Enter the marks of chemistry:-");
    scanf("%d",&chemistry);
     printf("Enter the marks of computers:-");
    scanf("%d",&computers);
     printf("Enter the marks of english:-");
    scanf("%d",&english);
    int sum= physics+maths+chemistry+computers+english;
    float per=sum/5;
    if(per>=90)
    {
        printf("Grade Awarded to the student is A with %.2f %",per);
    }
    else if(per<90&&per>=80)
    {
        printf("Grade Awarded to the student is B with %.2f %",per);
    }
    else if(per<80&&per>=70)
    {
        printf("Grade Awarded to the student is C with %.2f %",per);
    }
    else if(per<70&&per>=60)
    {
        printf("Grade Awarded to the student is D with %.2f %",per);
    }
    else if(per<60)
    {
        printf("Grade Awarded to the student is F with %.2f %",per);
    }
    else
    {
      printf("invalid result try again with correct marks");
    }
return 0;
}