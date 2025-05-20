#include<iostream>
#include<queue>

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

void LOT(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }

}

void IOT(node* root){
    if(root==NULL){
        return ;
    }
    IOT(root->left);
    cout<<root->data<<" ";
    IOT(root->right);

}



int main(){

    node* root=NULL;

   //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level order Traversal is: "<<endl;
    root=BuildTree(root);
    LOT(root);
    
    cout<<"In order Traversal is: "<<endl;
    IOT(root);
    return 0;
}