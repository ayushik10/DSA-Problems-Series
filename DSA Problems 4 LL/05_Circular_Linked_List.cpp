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

//INSERTION OF A NODE

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

//DELETION OF A NODE

void deleteNode(Node* &tail, int val)
{
    //empty list
    if(tail == NULL){
        cout << "The list is empty!" << endl;
        return;
    }

    else{
        //non-empty list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1-node LL
        if(curr == prev){
            tail = NULL;
        }
        //>=2 nodes LL
        else if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

//PRINTING THE LINKED LIST

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

//MAIN FUNCTION

int main()
{
    Node* tail = NULL;

    insertNode(tail, 5, 12);
    print(tail);

    insertNode(tail, 4, 8);
    print(tail);

    insertNode(tail, 3, 34);
    print(tail);

    deleteNode(tail, 4);
    print(tail);

    return 0;

}