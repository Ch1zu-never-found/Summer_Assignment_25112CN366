#include <stdio.h>
int main()
{
   for(char ch = 'A'; ch <= 'E'; ch++)
    {
        for (char c = ch; c <= 'E'; c++)
        {
            printf(" ");
        }
        for (char c = 'A'; c <= ch; c++)
        {
            printf("%c ",c);
        }
        for (char c = ch-1; c >= 'A'; c--)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}