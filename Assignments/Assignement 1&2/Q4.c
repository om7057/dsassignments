#include<stdio.h>


void interchange(int *arr1,int *arr2,int n){
    for(int i=0;i<n;i++){
        int temp=*(arr1+i);
        *(arr1+i)=*(arr2+i);
        *(arr2+i)=temp;
    }
}


int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements in the first array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in the second array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    interchange(arr1,arr2,n);
    printf("Values after swapping:\n");
    printf("Array 1:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }

    printf("\n");
    printf("Array 2:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}