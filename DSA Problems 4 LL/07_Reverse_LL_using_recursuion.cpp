//To reverse a linked list using recursion.

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

Node* reverse(Node* &head)
{   
   if(head == NULL || head->next == NULL)
   return head;

   Node* curr = reverse(head->next);
   head->next->next = head;
   head->next = NULL;

   return curr;
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

    head = reverse(head);

    cout << "Reversed List : ";
    print(head);

    return 0;
}