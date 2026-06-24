#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%49s", str1);

    printf("Enter second string: ");
    scanf("%49s", str2);
    for(int i = 0; str1[i] != '\0'; i++)
    {
        int seen = 0;
        for(int k = 0; k < i; k++)
        {
            if(str1[k] == str1[i])
            {
                seen = 1;
                break;
            }
        }
        if(seen)
            continue;

        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }
    return 0;
}