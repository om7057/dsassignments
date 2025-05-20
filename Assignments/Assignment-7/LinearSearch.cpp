#include<bits/stdc++.h>
using namespace std;



int main(){
int n,k;
int flag=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter element of whose index is to be returned\n";
cin>>k;
for(int i=0;i<n;i++){
    if(arr[i]==k){
        flag=i;
        break;
    }
}
if(flag==0){
    cout<<"-1"<<endl;
}
else{
    cout<<flag<<endl;
}

return 0;

}