// To reverse a linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void print(Node* head)
{
    if(head == NULL){
        cout << "The List is Empty! " << endl;
        return;
    }
    cout << "Original List : ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insert(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp; 
}

void reverseLL(Node* &head)
{   
    Node* prev = NULL;
  
    while(head != NULL){
      Node* curr = head;  
        head = head->next;
        curr->next = prev;
        prev = curr;
    }
    head =  prev;
}

int main()
{
    Node* head = new Node(11);

    insert(head, 23);
    insert(head, 45);
    insert(head, 13);
    insert(head, 89);
    insert(head, 36);
    insert(head, 9);

    print(head);

    reverseLL(head);

    cout << "Reversed List : ";
    print(head);

    return 0;
}