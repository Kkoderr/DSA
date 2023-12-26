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
/*
void reverseLL(Node* &head){
    Node* ptr = head;
    Node* preptr = ptr->next;
    Node* postptr = NULL;
    while(preptr->next != NULL){
        ptr->next = postptr;
        postptr = ptr ;
        ptr = preptr;
        preptr = preptr->next;
    }
    ptr->next = postptr;
    preptr->next = ptr;
    head = preptr;       
    return ;
}
*/
//It will return head of reverse linked list
Node* solve2(Node* head){
    if(head == NULL || head->next == NULL){
        return head ;
    }
    Node* chotahead = solve2(head->next);
    head->next->next = head;
    return chotahead;
}

void solve(Node* postptr , Node* ptr, Node* &head){
    if(ptr== NULL){
        head = postptr;
        return ;
    }
    solve(ptr, ptr->next, head);
    ptr->next = postptr;
}

void reverseLL(Node* &head){
    Node* ptr = head;
    Node* postptr  = NULL;
    solve(postptr,ptr,head);
}

void findMiddleNode(Node* head){
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(ptr2->next != NULL && ptr2->next->next != NULL){
        ptr2 = (ptr2->next)->next;
        ptr1 = ptr1->next;
    }
    if(ptr2->next == NULL){
        cout << "Middle element is : " << ptr1->data <<endl;
    }
    else{
        cout << "Middle element are : " << ptr1->data << " & " << ptr1->next->data << endl;
    }
    return ;
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

    findMiddleNode(head);

    return 0;
}