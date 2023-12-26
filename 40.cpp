#include<iostream>
using namespace std;

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

void insertAtHead(Node* &head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return ;    
}

void print(Node* head){
    Node* ptr = head;
    cout << ptr->data ;
    while(ptr->next != NULL){
        ptr = ptr->next;
        cout << " --> " << ptr->data ;
    }
    cout << endl;
    return ;    
}

Node* groupReverse(Node* head, int key){
    if(head == NULL)
        return NULL;
    
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count =0 ;
    while(curr != NULL && count<key){
        next = curr->next ;
        curr->next = prev;
        prev = curr ;
        curr = next;
        count++;
    }

    if(next != NULL){
        head->next = groupReverse(next,key);
    }

    return prev;
}

int main(){
    Node* head = new Node(5);
    print(head);
    insertAtHead(head,2);
    insertAtHead(head,9);
    insertAtHead(head,7);
    insertAtHead(head,4);
    insertAtHead(head,0);
    cout << head->data << endl;
    print(head);
    print(groupReverse(head,3));

    return 0;
}