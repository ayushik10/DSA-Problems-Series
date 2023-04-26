//To reverse a doubly linked list.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
          int data;
          Node* prev;
          Node* next;

          //constructor
          Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
          }
          ~Node(){
            int value = this->data;
        //meemory free
            if(this->next != NULL){
              delete next;
              this->next = NULL;
            }
          }
};

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int d)
{
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    Node* temp= new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void reverseDLL(Node* &head, Node* &tail){
    Node* curr = head;
    
    while(curr != NULL){
        Node* temp = curr->prev;
        curr->prev = curr->next;
        curr = curr->next;

        if(curr == NULL)
        tail->next = temp;

        else
        curr->prev->next = temp;
    }
    curr = head;
    head = tail;
    tail = curr;
}

int main()
{
   Node* Node1 = new Node(10);
  
   Node* head = Node1;
   Node* tail = Node1;

   insertAtHead(head, tail, 23);
   insertAtHead(head, tail,  56);
   insertAtHead(head, tail,  11);

   print(head);

   reverseDLL(head, tail);
   print(head);

   return 0;
}


