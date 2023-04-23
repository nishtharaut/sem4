#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void search(char *text , char *ham);

void main(){
    char *text ="";
    char *ham ="";
    text = malloc(256);
    ham = malloc(256);
    printf("Enter the text\n");
    scanf("%255s",text);
    printf("Enter the ham\n");
    scanf("%255s",ham);
    search(text,ham);
}

 void search(char *text , char *ham){
    int n,m,i,j=0;
     n=strlen(text);
     m =strlen(ham);
    
    for(i=0;i<=n-m;i++){
        j=0;
        for(j=0;j<m;j++){
            if(text[i+j]!=ham[j]){
                break;
            }
        }
         if(j==m){
         printf("The substring found at index %d \n",i);
         }
         printf("%d",i);
    }
 }