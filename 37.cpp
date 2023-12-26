#include<iostream>
using namespace std;
//Doubly linked list
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(){
            this->prev=NULL;
            this->next=NULL;
        }
        Node(int data){
            this->data = data;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
            cout << this->data << " value node is deleted!" << endl;
        }

};

void insertAtHead(Node* &head, int value){
    Node* ptr = new Node(value);
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    return ;
}

void insertAtLast(Node* head, int value){
    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    Node* newNode = new Node(value);
    ptr->next = newNode;
    newNode->prev = ptr;
    return ;
}

void insertAtPos(Node* &head, int value, int pos){
    Node* ptr = head;
    if(pos == 1){
        insertAtHead(head,value);
    }else{
        int count = 1;
        while(count++ < pos)
            ptr = ptr->next;
        Node * newNode = new Node(value);
        if(ptr == NULL){
            insertAtLast(head,value);
        }else{
            newNode->next = ptr;
            newNode->prev = ptr->prev;
            ptr->prev =newNode ;
            (newNode->prev)->next = newNode;
        }
    }
    return ;
}

void deleteNode(Node* &head, int pos){
    Node* ptr = head;
    if(pos == 1){
        head = ptr->next;
        head->prev = NULL;
        ptr->next = NULL;
    }else{
        int count =1;
        while(count++< pos)
            ptr = ptr->next;
        if(ptr->next == NULL){
            (ptr->prev)->next = NULL;
            ptr->prev = NULL;
        }else{
            (ptr->prev)->next = ptr->next;
            (ptr->next)->prev = (ptr->prev);
            ptr->prev = NULL;
            ptr->next = NULL;
        }
    }
    delete ptr;
    return ;
}

int getLength(Node* head){
    int len=1;
    Node* ptr = head;
    while(ptr == NULL){
        len++;
        ptr = ptr->next;
    }
    return len;
}

void print(Node * head){
    Node* ptr = head;
    cout << ptr->data ;
    while(ptr->next!=NULL){
        ptr = ptr->next;
        cout << " --> " << ptr->data ;
    }
    cout << endl;
}


int main(){
    Node* head = new Node(10);
    print(head);
    cout << "Length on LL : " << getLength(head) << endl;;
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    print(head);
    insertAtPos(head,15,2);
    print(head);
    deleteNode(head,1);
    print(head);

    return 0;
} 