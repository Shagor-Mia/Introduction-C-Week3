#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], s1[101];
    scanf("%s %s", &s, &s1);
    int ls1 = strlen(s1);
    strcpy(s,s1);
    printf("%s %s", &s, &s1);
    return 0;
}