#include<iostream>
using namespace std;


void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *first=new int[l1];
    int *second=new int[l2];
    int mainArrayIndex=s;
    for(int i=0;i<l1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    int k=mid+1;
    for(int i=0;i<l2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    int i1=0;
    int i2=0;

    mainArrayIndex=s;


    while(i1<l1&&i2<l2){
        if(first[i1]<second[i2]){
            arr[mainArrayIndex++]=first[i1++];
        }
        else{
            arr[mainArrayIndex++]=second[i2++];
        }
    }
    while(i1<l1){
        arr[mainArrayIndex++]=first[i1++];
    }
    while(i2<l2){
        arr[mainArrayIndex++]=second[i2++];
    }
}
void mergeSort(int *arr,int s,int e){
    int mid=(s+e)/2;
  if(s>=e){
    return ;
  }
  mergeSort(arr,s,mid);
  mergeSort(arr,mid+1,e);
  merge(arr,s,e);



}

int main(){
 
 int arr[5]={2,5,1,6,9};
 int n=5;

 mergeSort(arr,0,n-1); 

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

    return 0;
}