#include<stdio.h>
#include<string.h>
int main(){
   char str1[21],str2[21];
   scanf("%s\n%s",&str1,&str2);
//    printf("%s\n%s",str1,str2);
   int value=strcmp(str1,str2);
   if(value<=0){
    printf("%s",str1);
   }
   else{
    printf("%s",str2);
   }

    return 0;
}