#include<iostream>
using namespace std;
//Singly Linked list
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
};

void insertAtHead(Node* &head , int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return ;
}

void insertAtPos(Node* head, int key, int data){
    Node* ptr = head;
    while(ptr->data != key)
        ptr = ptr->next;
    Node* newNode = new Node(data);
    newNode->next = ptr->next;
    ptr->next = newNode ;
    return ;
}

void insertAtLast(Node* head, int data){
    Node* ptr = head;
    while(ptr->next != NULL)
        ptr = ptr->next;
    Node* newNode = new Node(data);
    ptr->next = newNode;    
    return ;
}

void deleteFromPos(Node * &head, int pos){
    Node* ptr = head;
    Node* preptr = NULL;
    if(pos == 0){
        head = ptr->next;
    }else{
        int count = 0;
        while(count++ != pos){
            preptr = ptr;
            ptr = ptr->next;
        }
        if(ptr->next==NULL)
            preptr->next = NULL;
        else
            preptr->next = ptr->next;
    }
    ptr->next = NULL;
    delete ptr;
    return ;
}

void deleteKeyNode(Node* &head, int key){
     
}

void print(Node* head){
    Node* ptr = head;
    while(ptr->next != NULL){
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
    cout << endl;
    return ;
}

int main(){

    Node* head = new Node();
    insertAtHead(head,10);
    insertAtHead(head,7);
    insertAtHead(head,15);
    insertAtPos(head,7,20);
    print(head);
    deleteFromPos(head,3);
    print(head);
    
    return 0;
}