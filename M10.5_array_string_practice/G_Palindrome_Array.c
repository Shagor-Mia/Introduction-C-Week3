#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 1;
    int i = 0;
    int j = n - 1;
    for (i, j; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("NO");
            flag = 0;
            break;
        }
    }
    if(flag==1)
    printf("YES");
    return 0;
}