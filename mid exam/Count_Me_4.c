#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int freq[26] = {0};
    int strlength = strlen(str);

    for (int i = 0; i < strlength; i++)
    {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {

        if (freq[i] > 0)
        {

            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}