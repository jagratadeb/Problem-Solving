#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s)
{
    int i, length;
    bool isSame = true;

    char *validArray = (char *)malloc((strlen(s) + 1) * sizeof(char));
    int validIndex = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            validArray[validIndex++] = s[i] + 32;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            validArray[validIndex++] = s[i];
        }
    }
    validArray[validIndex] = '\0';

    length = validIndex;

    for (i = 0; i < (length / 2); i++)
    {
        if (validArray[i] != validArray[length - i - 1])
        {
            isSame = false;
            break;
        }
    }

    free(validArray);
    return isSame;
}

int main()
{
    // Example strings to test
    char test1[] = "A man, a plan, a canal: Panama";
    char test2[] = "race a car";

    // Check and print results
    if (isPalindrome(test1))
    {
        printf("\"%s\" is a palindrome.\n", test1);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", test1);
    }

    if (isPalindrome(test2))
    {
        printf("\"%s\" is a palindrome.\n", test2);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", test2);
    }

    return 0;
}
