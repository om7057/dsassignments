#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;
  
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
  
};

node* BuildTree(node* root){
   int data;
   cout<<"Enter the data: "<<endl;
   cin>>data; 
   root=new node(data);
   if(data==-1){
    return NULL;
   }

   cout<<"Left of: "<<data<<endl;
   root->left=BuildTree(root->left);

   cout<<"Right of: "<<data<<endl;
   root->right=BuildTree(root->right);

   return root;

}


int main(){

    node* root=NULL;


    root=BuildTree(root);


    return 0;
}