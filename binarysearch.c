#include<stdio.h>

void main(){
   int array[7];
   int target,i;
   printf("Enter  the elements\n");
   for(i=0;i<7;i++){
      scanf("%d",&array[i]);
   }
   printf("Enter the target\n");
   scanf("%d",&target);

   int start=0;
   int end =sizeof(array)/sizeof(array[0]) -1;
   while(start<=end){
     int mid =start+end/2;
     if(array[mid]==target){
        printf("Element found at index %d",mid);
        break;
     }else if(array[mid]<target){
        start=mid+1;
     }else if(array[mid]>target){
        end=mid-1;
     }
   }
}