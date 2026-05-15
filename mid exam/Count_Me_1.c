#include <stdio.h>
int main()
{
    int N;
    scanf("%d ", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c2=0;
    int c3=0;
   for (int i = 0; i < N; i++)
    {
       if(arr[i]%2==0){
        c2++;

       }
       else if(arr[i]%3==0){
        c3++;

       }
    }
    printf("%d %d",c2,c3);
    return 0;
}