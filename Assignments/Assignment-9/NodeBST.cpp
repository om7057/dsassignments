#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left,*right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
 
node* insert(node* root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insert(root->right,d);
    }
    else{
        root->left=insert(root->left,d); 
    }

    return root;
}


void IOT(node* root){
    if(root==NULL){
        return ;
    }
    IOT(root->left);
    cout<<root->data<<" ";
    IOT(root->right);

}

void POT(node* root){
if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    POT(root->left);
    POT(root->right);

}

void POOT(node* root){
    if(root==NULL){
        return ;

    }
    POOT(root->left);
    POOT(root->right);
    cout<<root->data<<" ";
}


void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insert(root,data);
        cin>>data;
    }
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


int main(){


   node* root=NULL;

   cout<<"Enter data to create BST"<<endl;
   takeInput(root);

   cout<<"Printing the BST"<<endl;
   LOT(root);

   cout<<"Inorder Traversal "<<endl;
   IOT(root);
   cout<<endl;

   cout<<"Preorder Traversal "<<endl;
   POT(root);
   cout<<endl;

   cout<<"Postorder Traversal "<<endl;
   POOT(root);

    return 0;
}