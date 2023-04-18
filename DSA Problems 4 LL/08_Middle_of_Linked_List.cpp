//To find the middle of Linked List.

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

Node* getMiddle(Node* &head)
{
    if(head == NULL || head->next == NULL)
    return head;

    Node* fast = head;
    Node* slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
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

    cout << "Middle element of the Linked List is ";
    Node* ans =  getMiddle(head);
    cout << ans->data;
    
    return 0;
}