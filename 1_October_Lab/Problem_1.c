#include <stdio.h>
#define CHAR_COUNT 256

int main() 
{
    char string1[100];
    char string2[100];
    int count[CHAR_COUNT] = {0}; 
    int n1 = 0, n2 = 0;          
    int i = 0;                   
    int is_anagram = 1;

    //input
    printf("Input first string without spaces: ");
    scanf("%s", string1);

    printf("Input second string without spaces: ");
    scanf("%s", string2);

    while (string1[n1] != '\0')
    {
        n1++;
    }
    while (string2[n2] != '\0')
    {
        n2++;
    }

    //checking for anagram
    if (n1 != n2)
    {
        is_anagram = 0;
    }
    else
    {
        for (i = 0; i < n1; i++)
        {
            count[(unsigned char)string1[i]]++;
        }
        for (i = 0; i < n2; i++)
        {
            count[(unsigned char)string2[i]]--;
        }
        for (i = 0; i < CHAR_COUNT; i++)
        {
            if (count[i] != 0)
            {
                is_anagram = 0;
                break;
            }
        }
    }

    //output
    if (is_anagram == 1)
    {
        printf("\nThe strings \"%s\" and \"%s\" are anagrams.\n", string1, string2);
    }
    else
    {
        printf("\nThe strings \"%s\" and \"%s\" are not anagrams.\n", string1, string2);
    }

    return 0;
}