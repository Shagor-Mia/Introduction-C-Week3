#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d\n", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freqlimit[100001] = {0};
    for (int i = 0; i < N; i++)
    {
        int value = arr[i];
        freqlimit[value]++;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n",freqlimit[i]);
    }
    return 0;
}