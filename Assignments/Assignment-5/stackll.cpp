#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
private:
    Node* top; 
public:
    Stack() {
        top = NULL; 
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    
    int pop() {
        if (isEmpty()) {
            cout << "UNDERFLOW" << endl;
            return -1; 
        }
        Node* temp = top;
        int popVal = top->data;
        top = top->next;
        delete temp;
        return popVal;
    }

    
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack; 

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    cout << "Stack Elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " "; 
    }
    cout << endl;

    stack.push(5);
    stack.push(6);

    cout << "Stack Elements: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }
    cout << endl;

    return 0;
}
