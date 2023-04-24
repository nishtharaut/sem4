#include<stdio.h>

void main(){
    int i,j,array[7],temp;
    printf("Enter the array elements\n");
    for(i=0;i<7;i++){
        scanf("%d",&array[i]);
    }
    for(i=1;i<7;i++){
        temp=array[i];
        j=i-1;
        while(j>=0 && temp<=array[j]){
           array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;
        }

        for(i=0;i<7;i++){
            printf("nkjvrn");
            printf("%d\n",array[i]);
        }
    }