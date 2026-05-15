#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char str[100001];

    for (int i = 0; i < n; i++)
    {

        scanf("%s", str);
        int strUpperLetterCount = 0;
        int strSmallLetterCount = 0;
        int strDigitCount = 0;
        int strlength = strlen(str);
        for (int c = 0; c < strlength; c++)
        {
            if (str[c] >= 'A' && str[c] <= 'Z')
            {

                strUpperLetterCount++;
            }
            else if (str[c] >= 'a' && str[c] <= 'z')
            {

                strSmallLetterCount++;
            }
            else if (str[c] >= '0' && str[c] <= '9')
            {

                strDigitCount++;
            }
        }
        printf("%d %d %d\n", strUpperLetterCount, strSmallLetterCount, strDigitCount);
    }

    return 0;
}