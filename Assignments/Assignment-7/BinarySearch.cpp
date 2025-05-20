#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be compared\n";
    cin>>k;
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            cout<<"Element is found at index: "<<mid<<endl;
            break;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    if(start>end){
        cout<<"Element is not present in the array."<<endl;
    }
return 0;
}