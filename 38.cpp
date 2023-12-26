#include<iostream>
using namespace std;

//Circular linked list

class Node{
    public:
        int data;
        Node* next;
        
        Node(){
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            cout << "Memory free for " << this->data << " value node." << endl;
        }
};

void  insertAtHead(Node* &head, int value){
    Node * newNode = new Node(value);
    Node* ptr = head;
    while(ptr->next != head)
        ptr = ptr->next;
    newNode->next = head ;
    ptr->next = newNode;
    head = newNode;
    return ;
}

void insertAtlast(Node* head, int value){
    Node* ptr = head;
    while(ptr->next != head)
        ptr = ptr->next;
    Node* newNode = new Node(value);
    ptr->next = newNode;
    newNode->next = head;
    return ;
}

void insertAtPos(Node* &head, int value, int pos){
    if(pos == 1)
        insertAtHead(head,value);
    else{
        Node* ptr = head;
        int count =1;
        while(count++ < pos-1)
            ptr = ptr->next;
        if(ptr->next == head)
            insertAtlast(head,value);
        else{
            Node* newNode = new Node(value);
            newNode->next = ptr->next;
            ptr->next = newNode;
        }

    }
    return ;
}

void print(Node* head){
    Node* ptr = head;
    cout << ptr->data ; 
    while(ptr->next != head){
        ptr = ptr->next;
        cout << " --> " << ptr->data ;
    }
    cout << endl;
    return ;
}

int main(){
    Node* head = new Node(3);
    head->next = head;
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtlast(head,2);
    print(head);
    insertAtPos(head,5,2);
    insertAtPos(head,6,1);
    print(head);

    return 0;
}