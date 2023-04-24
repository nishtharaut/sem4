#include<stdio.h>
void bellman(int graph[20][20],int V , int k , int edge[20][2]);

void bellman(int graph[20][20],int V , int k , int edge[20][2]){
    int i,j,s,u,v=0;
    int distance[20],parent[20];
    for(i=0;i<V;i++){
        distance[i]=100;
        parent[i]=-1;
    }
    printf("Enter the source vertex\n");
    scanf("%d",&s);
     distance[s-1]=0;
    for(i=0;i<V-1;i++){
        for(j=0;j<k;j++){
             u=edge[j][0];
             v=edge[j][1];
             if(distance[u]+graph[u][v]<distance[v]){
                distance[v]=graph[u][v]+distance[u];
                parent[v]=u;
             }
        }
    }
    for(i=0;i<V;i++){
     printf("Vertex %d -> cost = %d parent = %d\n",i+1,distance[i],parent[i]+1);
    }
}

void main(){
    int graph[20][20],n,k,i,j,edge[20][2];
    printf("Enter the vertex\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&graph[i][j]);
            if(graph[i][j]!=0){
               edge[k][0]=i,edge[k++][1]=j;
            } 
        }
    }
    
    bellman(graph,n,k,edge);
}