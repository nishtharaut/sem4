#include<stdio.h>
#define INF 999

 void floydbhai(int graph[][4], int n);


void main(){
    int graph[4][4] = {{0, 3, INF, 5},
             {2, 0, INF, 4},
             {INF, 1, 0, INF},
             {INF, INF, 2, 0}};
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){     printf("\n");
          printf("%d ",graph[i][j]);
        }
        printf("\n");
    }

    floydbhai(graph,4);
}

void floydbhai(int graph[][4], int n){
    int matrix[100][100], i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = graph[i][j];
        }
             printf("\n");
    }

    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(matrix[i][k]+matrix[k][j]<matrix[i][j]){
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
                }
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(matrix[i][j]==INF){
                printf("%4s","INF");
            }else{
            printf("%4d ",matrix[i][j]);
            }
        }
        printf("\n");

    }
}


