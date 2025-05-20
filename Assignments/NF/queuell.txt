#include<iostream>
using namespace std;

struct Node{     
     int data;
     Node* next;
     Node(int d){
        data=d;
        next=NULL;
     }
};

struct Queue{
    Node *rear,*front;
    Queue(){front=rear=NULL;}

    void enqueue(int x){
        Node*temp=new Node(x);
        if(rear==NULL){
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    void deque(){
        if(front==NULL){
            return ;
        }
        Node*temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete (temp);
    }
};



int main(){

    Queue q;
    q.enqueue(12);
    q.enqueue(13);
    q.deque();
    q.enqueue(14);
    q.deque();
    q.enqueue(13);
    q.deque();
    q.enqueue(16);
    q.enqueue(17);

    cout<<"Front of the Queue: "<<((q.front!=NULL)?(q.front)->data:-1)<<endl;
    cout<<"Rear of the Queue: "<<((q.rear!=NULL)?(q.rear)->data:-1);


    return 0;
}