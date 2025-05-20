#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter the elements in the first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements in the second array"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    // }
    // for(int i=0;i<n;i++){
    //     a[i]=a[i]-b[i];
    //     b[i]=a[i]+b[i];
    //     a[i]=b[i]-a[i];
    // }
    // cout<<"First array is:"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"Second array is:"<<endl;
    // for(int i=n-1;i>=0;i--){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int i=0,j=n-1;
    while(i<n){
        a[i]=a[i]^b[j];
        b[j]=a[i]^b[j];
        a[i]=b[j]^a[i];
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}