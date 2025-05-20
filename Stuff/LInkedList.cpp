#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node(int d){
     data=d;
     next=NULL;
}

};

void insertatback(node* &head,int d){
       node* p=new node(d);
       if(head==NULL){
           head=p;
         return;
        }

        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
}


void insertatfront(node* &head,int d){
    node* p=new node(d);
       if(head==NULL){
           head=p;
         return;
        }
        p->next=head;
        head = p;

}

void display(node* p){
    node* temp=p;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void deleteback(node* &head,int d){


}

int main()
{
    node* head=NULL;
    insertatback(head,69);
    insertatfront(head,1221);
    insertatback(head,69696);
    insertatfront(head,6969);
    display(head);




return 0;
}