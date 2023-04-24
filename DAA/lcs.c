#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int max(int num1 , int num2);
void main() {
    char *str = "";
    char *small = "";
    printf("enter string1 value\n");
    str=malloc(256);
    scanf("%255s",str);

    printf("enter string2 value\n");
    small=malloc(256);
    scanf("%255s",small);

    char commons[100]={'\0'};
    printf("%s",commons);
    int dp[strlen(str)+1][strlen(small)+1];
    int n = sizeof(dp)/sizeof(dp[0]);
    int m = sizeof(dp[0])/sizeof(dp[0][0]);
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
       for(int j =1;j<m;j++){
           if(str[i-1]==small[j-1]){
               dp[i][j]=1+dp[i-1][j-1];
           }else{
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
        }
    }

       int i=n;
       int j=m;
       while(i>0 && j>0){
           if(str[i-1]==small[j-1]){
               strncat(commons, &str[i-1], 1);
               printf("%s\n",commons);
               i--;
               j--;
           }else{
               if(dp[i-1][j]>dp[i][j-1]){
                   i--;
               }else{
                   j++;
               }
           }
       }


    int l = n-1;
    int p = m-1;
    printf(" The common subsequence length is : %d \n",dp[l][p]);
    printf(" The common subsequence is : %s",strrev(commons));
}


int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

