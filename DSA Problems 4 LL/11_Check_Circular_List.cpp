// To check whether the given linked list is circular or not.

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertNode(Node* &tail, int position, int d)
{
    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);

        tail = temp;
        temp->next = temp;
    }

    else{
        //non-empty list
        Node* current = tail;
       
        while(current->data != position){
            current = current->next;
        } 
        Node* temp = new Node(d);

        temp->next = current->next;
        current->next = temp;
    }
}

void print(Node* tail)
{
    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout << "LIst is empty!" << endl;
        return;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);

    cout << endl;
}

bool isCircular(Node* head)
{
    if(head == NULL)
    return true;

    Node* temp = head->next;
    while(temp != NULL && temp != head)
    {
        temp++;
    }

    if(temp == head)
    return true;
    else
    return false;
}

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 7);
    insertNode(tail, 7, 9);
    insertNode(tail, 5, 6);
    insertNode(tail, 9, 10);
    print(tail);
   
   if(isCircular(tail)){
    cout << "Circular linked list!! " << endl;
   }
   else{
    cout << "Not a Circluar linked list!! " << endl;
   }

   return 0;


}