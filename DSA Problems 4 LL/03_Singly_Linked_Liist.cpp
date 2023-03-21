#include<iostream>
#include<map>
using namespace std;

//CREATING NODE

class Node{
    public:
    int data;
    Node* next;

    //costructor
    Node(int data){
        this->data = data;
        this->next = NULL;
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

//TRAVERSING THE LINKED LIST

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

void insertAtHead(Node* head, int d)
{
    //new node creation
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//INSERTION AT TAIL 

void insertAtTail(Node* &tail, int d)
{
    //creation of new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // tail = temp;
}

//INSERTOIN AT GIVEN POSTION

void insertAtPosition(int pos, int d, Node* &head, Node* &tail)
{
    //for pos = head
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    //creation of new node
    Node* temp = head;
    int count = 1;

    while(count < pos-1){
        temp = temp->next;
      
        count++;
    }
    //for pos = last
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

//DELETION OF NODE

void deletion(int pos, Node* &head)
{
    //deleting starting node
    if(pos ==1){
        Node* temp = head;
        head = head->next;

        //memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count < pos){
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}

//MAIN FUNCTION

int main()
{
    //creation of new node
    Node* node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 9);
    print(head);

    insertAtTail(tail, 6);
    print(tail);

    insertAtPosition(2, 34, head, tail);
    print(head);

    deletion(3, head);
    print(head);

    return 0;
}