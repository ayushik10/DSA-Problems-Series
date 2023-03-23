#include<iostream>
using namespace std;

//CREATION OF NODE

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

    //destructor
    ~Node(){
        int value = this->data;
        //meemory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

//PRINTING THE LINKED LIST

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//INSERTION AT HEAD

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

//INSERTION AT TAIL

void insertAtTail(Node* &head, Node* &tail, int d)
{
    if(head == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp; 
}

//INSERTION AT POSITION

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    //insert at first
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }
    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }
    Node* NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;

    //insert at last
    if(temp->next == NULL){
        insertAtTail(head, tail, d);
        return;
    }
}

//DELETION OF A NODE

void deletion(Node* &head, int position)
{
    //deletion at start
    if(position == 1){
        Node* temp = head;

        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    
    else{
    //deletion at middle or last node
    Node* current = head;
    Node* prev = NULL;
    int count = 1;

    while(count < position){
        prev = current;
        current = current->next;
        count++;
    }
    current->prev = NULL;
    prev->next = current->next;
    current->next = NULL;
    delete current;
    }
}

//MAIN FUNCTION

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, tail, 3);
    print(head);
    
    insertAtHead(head, tail, 6);
    print(head);

    insertAtTail(head, tail, 12);
    print(head);

    insertAtPosition(head, tail, 4, 45);
    print(head);

    deletion(head, 4);
    print(head);

    return 0;

}