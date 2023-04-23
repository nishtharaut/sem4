#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int board[20];
void queen(int row , int n);
void printt(int n);
int place(int row , int column);

void main(){
    int n=0;
    printf("Enter the no.of Queens\n");
    scanf("%d",&n);
    printf("%d",n);
    queen(1,n);
}

void queen(int row , int n){
   int column;
   for(column=1;column<=n;++column){
    if(place(row,column)){
      board[row]=column;
      if(row==n){
        printf("hello");
        printt(n);
      }else{
        queen(row+1,n);
      }
    }
   }
}

int place(int row , int column){
   int i;
   for(i=1;i<=row-1;++i){
      if(board[i]==column){
        return 0;
      }else {
      if(abs(board[i]-column)==abs(i-row)){
        return 0;
      }
      }
   }
   return 1;
}

void printt(int n){
  int i,j;
  for(i=1;i<=n;++i){
    for(j=1;j<=n;++j){
      if(board[i]==j){
        printf("Q");
      }else{
        printf("-");
      }
    }
    printf("\n");
  }
}
