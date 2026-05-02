#include <stdio.h>
#include <string.h>
int main()
{
    char t[10001];
    scanf("%s", t);
    int len = strlen(t);
    for (int i = 0; i < len; i++)
    {

        if (t[i] == ',')
        {
            // comma->space
            t[i] = ' ';
        }
        else if (t[i] >= 'A' && t[i] <= 'Z')
        {
            // upper->lower
            t[i] += 32;
        }
        else if (t[i] >= 'a' && t[i] <= 'z')
        {
            // lower->upper
            t[i] = t[i] - 32;
        }
    }
    printf("%s", t);
    return 0;
}