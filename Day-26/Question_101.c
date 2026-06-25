#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int l=rand()%(10+1);
    printf("Enter your guess between 1-10:");
    scanf("%d",&n);
    if(l==n)
    printf("Random number was guessed Correctly.");
    else
    printf("Incorrect Guess %d",l);
    return 0;
}