#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    if (strlen(s) != strlen(t))
    {
        return false;
    }

    int H[128] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        H[(unsigned char)s[i]]++;
    }
    for (i = 0; t[i] != '\0'; i++)
    {
        H[(unsigned char)t[i]]--;
    }
    for (i = 0; i < 128; i++)
    {
        if (H[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Test case 1: Valid anagram
    char str1[] = "anagram";
    char str2[] = "nagaram";

    // Test case 2: Not an anagram
    char str3[] = "rat";
    char str4[] = "car";

    if (isAnagram(str1, str2))
    {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    if (isAnagram(str3, str4))
    {
        printf("\"%s\" and \"%s\" are anagrams.\n", str3, str4);
    }
    else
    {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str3, str4);
    }

    return 0;
}
