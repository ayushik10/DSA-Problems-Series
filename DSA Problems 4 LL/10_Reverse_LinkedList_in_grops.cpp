// To reverse a LinkedList in k-groups.

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

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp; 
}

Node* reverseInGroups(Node* &head, int k)
{
    if(head == NULL)
    return NULL;

    //step1 : reverse first k-nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step2: recursion
    if(next != NULL)
    head->next = reverseInGroups(next, k);
    
    //step3:
    return prev;

}

int main()
{
    Node* head = new Node(15);
    int k;

    cout << "Enter the value of k: ";
    cin >> k;

    insert(head, 23);
    insert(head, 45);
    insert(head, 10);
    insert(head, 16);
    insert(head, 20);
    insert(head, 17);

    print(head);

    head = reverseInGroups(head, k);

    print(head);

    return 0;

}