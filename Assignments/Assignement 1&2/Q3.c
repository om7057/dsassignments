#include<stdio.h>
int recursiveapproach(int arr[],int size,int i){
     if(i==size-1){
        return arr[i];
     }
  
  int max=recursiveapproach(arr,size,i+1);
  if(arr[i]>max){
    return arr[i];
     }
     return max;
}


int main(){
    int arr[5];
    printf("Enter the 5 integral elements in the array: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int count=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>=count){
            count=arr[i];
        }
    }
     printf("The biggest element of the array by iterative approach is: %d\n",count);
     printf("The biggest element of the array by recursive method is: %d\n",recursiveapproach(arr,5,0));



    return 0;
}