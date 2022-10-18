#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char input[20];
    int i=0,count = 0;
    scanf("%s",input);  
    while(input[i]!='\0'){
     count++;
     i++;
    }
    for(int i=count-1;i>=0;i--){
        printf("%c",input[i]);
    }
   
}