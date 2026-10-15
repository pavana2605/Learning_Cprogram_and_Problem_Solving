#include <stdio.h>
int main()
{
    char str[] = "Banana";
    int hashfreq[52] = {0};
    // Count
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        int index = str[i] - 'a';
        hashfreq[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hashfreq[i] > 0)
        {
            printf("%c=%d\n", 'a' + i, hashfreq[i]);
        }
    }
}

//for both upper and lower cases are counted and map them..