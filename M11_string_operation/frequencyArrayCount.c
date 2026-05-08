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
    int freq[6]={0};
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            freq[0]++;
        }
        else if(arr[i]==1){
            freq[1]++;
        }
        else if(arr[i]==2){
            freq[2]++;
        }
        else if(arr[i]==3){
            freq[3]++;
        }
        else if(arr[i]==4){
            freq[4]++;
        }
        else if(arr[i]==5){
            freq[5]++;
        }
    }

    printf("%d -> %d\n",0,freq[0]);
    printf("%d -> %d\n",1,freq[1]);
    printf("%d -> %d\n",2,freq[2]);
    printf("%d -> %d\n",3,freq[3]);
    printf("%d -> %d\n",4,freq[4]);
    printf("%d -> %d\n",5,freq[5]);
    return 0;
}