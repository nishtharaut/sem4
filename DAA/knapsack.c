#include<stdio.h>
float weight[10];
float value[10];
void sort();
float ratio[10];
int n=0;
void main(){
    int i=0;
    float wigh,profit,w,frac,temp1,temp2,temp3=0;
    printf("Enter the weight of knapsack\n");
    scanf("%f",&w);
    printf("enter the number of items\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
          printf("Enter the weight and profit of item %d \n" ,i+1);
          scanf("%f",&weight[i]);
          scanf("%f",&value[i]);
          ratio[i]=value[i]/weight[i];
    }
    sort();

    for(i=0;i<n;i++){
       if(wigh+weight[i]<=w){
          wigh+=weight[i];
          profit+=value[i];
       }else{
         temp3=w-wigh;
        frac = temp3/weight[i];
         temp1 =weight[i]*frac;
          temp2 = value[i]*frac;
         wigh+=temp1;
         profit+=temp2;
         break;
       }
    }
    printf("the total profit is %f",profit);

}
void sort(){
    int i,j=0;
    float temp1,temp2,temp3=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ratio[i]<ratio[j]){
               temp1=ratio[i];
               ratio[i]=ratio[j];
               ratio[j]=temp1;

               temp2=weight[i];
               weight[i]=weight[j];
               weight[j]=temp2;

                temp3=value[i];
               value[i]=value[j];
               value[j]=temp3;
            }
        }
    }
}