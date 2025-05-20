// #include<bits/stdc++.h>
// using namespace std;


// class Queue{
//     public:
//     // Queue(){

//     // }
//     int *arr;
//     int front,rear;
//     Queue(int size){
//         int *arr=new int[size];
//      front=rear=-1;
//     }
//     void insert(int data){
//         if(front == -1 && rear == -1){
//             arr[0]=data;
//             front++;
//             rear++;
//         }
//         else {
//             arr[++rear]=data;
//         }
//     }
// };

// int main(){
//     int n;
//     cout<<"Enter the size of the array:\n";
//     cin>>n;
//     int arr[n];
    
     
     
    
// return 0;
// }




//Queue using STL

// #include<iostream>
// #include<queue>
// using namespace std;



// int main(){
//    queue<int> q;
//    q.push(34);
//    cout<<"Front of Queue is: "<<q.front()<<endl;
//    q.push(45);
//    cout<<"Front of Queue is: "<<q.front()<<endl;
//    q.push(14);
//    cout<<"Front of Queue is: "<<q.front()<<endl;

//    cout<<"size of queue is: "<<q.size()<<endl; 
//    q.pop();
//    q.pop();
//    q.pop();
//    cout<<"size of queue is: "<<q.size()<<endl;
//    if(q.empty()){
//     cout<<"Queue is empty."<<endl;
//    }
//    else{
//     cout<<"Queue is not empty"<<endl;
//    }

//     return 0;
// }



//Queue using array
#include<iostream>
using namespace std;

class Queue{
     int *arr;
     int qfront,rear,size;

     public:

     Queue(){
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
     }




     void enqueue(int data){
        if(rear==size){
            cout<<"Queue is full."<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
     }


    
     bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
     }
     

     int deque(){
        if(qfront==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0; 
            }
            return ans;
        }
     }



     int front(){
        if(qfront==rear){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        else{
            return arr[qfront];
        }
     }


};
int main(){
     Queue obj;
     obj.enqueue(12);
     obj.enqueue(13);
     obj.enqueue(14);
     obj.enqueue(15);

     
     int dequeuedValue = obj.deque();
     cout << "Dequeued value: " << dequeuedValue << endl;

     
     int frontValue = obj.front();
     cout << "Front value: " << frontValue << endl;

     bool emptyStatus = obj.isEmpty();
     cout << "Is the queue empty? " << (emptyStatus ? "Yes" : "No") << endl;

     return 0;
}
