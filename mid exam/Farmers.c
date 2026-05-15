#include<stdio.h>
int main(){
   int T,M1,M2,D;
   scanf("%d",&T);
   
   for(int i=0;i<T;i++){
    scanf("%d %d %d",&M1,&M2,&D);
    int totalF=M1+M2;
    int workDsingle=M1*D;
    int workDAllF=workDsingle/totalF;
    int daySave=D-workDAllF;
    printf("%d\n",daySave);
   }
   
    return 0;
}