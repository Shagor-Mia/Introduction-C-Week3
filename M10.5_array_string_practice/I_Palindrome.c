#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);
    int i = 0, j = len - 1;
    int flag = 1;
    for (i, j; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    return 0;
}