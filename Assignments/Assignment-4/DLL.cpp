#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~node() {
        cout << "Free " << data << endl;
    }
};

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatfront(node* &head, int d) {
    node* ptr = new node(d);
    ptr->next = head;
    if (head != NULL) {
        head->prev = ptr;
    }
    head = ptr;
}

void insertatEnd(node* &head, int d) {
    node* temp = head;
    node* ptr = new node(d);

    if (temp == NULL) { 
        head = ptr;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }       

    temp->next = ptr;
    ptr->prev = temp;
}

void insertatpos(node* &head, int d, int pos) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1 || head == NULL) { 
        insertatfront(head, d);
        return;
    }

    node* temp = head;
    node* ptr = new node(d);

    int count = 1;
    while (count < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    ptr->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = ptr;
    }
    temp->next = ptr;
    ptr->prev = temp;
}

void deleteNode(node* &head, int value) {
    if (head == NULL) {
        return;
    }

    if (head->data == value) {
        node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return;
    }

    node* current = head;
    while (current != NULL && current->data != value) {
        current = current->next;
    }

    if (current == NULL) {
        cout << "Node with value " << value << " not found." << endl;
        return;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    delete current;
}

int main() {
    node* head = new node(10);
    insertatfront(head, 10);
    print(head);
    cout << endl;
    insertatEnd(head, 234);
    print(head);
    cout << endl;
    
    insertatpos(head,34,1);
    print(head);
    cout<<endl;

    insertatpos(head, 99, 2);
    print(head);
    cout << endl;

    deleteNode(head, 54); 
    print(head);
    cout << endl;

    deleteNode(head, 10); 
    print(head);
    cout << endl;

    deleteNode(head, 234); 
    print(head);

    return 0;
}
