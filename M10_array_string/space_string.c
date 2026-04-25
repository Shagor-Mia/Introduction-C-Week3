#include<stdio.h>
int main(){
   int s[50];
//    gets(s);
   fgets(s,22,stdin);
   printf("%s",s);
    return 0;
}