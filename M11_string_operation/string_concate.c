#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101], str2[101];
    scanf("%s %s", &str1, &str2);
    int strL1 = strlen(str1);
    int strL2 = strlen(str2);
    for (int i = 0; i <= strL2; i++)
    {
        str1[i + strL1] = str2[i];
    }
    printf("%s %s", str1, str2);

    return 0;
}