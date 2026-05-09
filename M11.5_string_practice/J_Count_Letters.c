#include <stdio.h>

int main()
{
    char str[10000001];
    scanf("%s", str);

    int letters[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        int index = str[i] - 'a';
        letters[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] > 0)
        {
            printf("%c : %d\n", i + 'a', letters[i]);
        }
    }

    return 0;
}