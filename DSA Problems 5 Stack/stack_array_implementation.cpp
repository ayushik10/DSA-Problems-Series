#include<bits/stdc++.h>
using namespace std;

class Stack {

    public:
         int *arr;
         int top;
         int size;

         Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = -1;
         }

         void push(int e) {
            if(size-top > 1) {
                top++;
                arr[top] = e;
            }
            else
            cout << "Stack Overflow!";
         }

         void pop() {
            if(top >= 0)
            top--;
            else
            cout << "Stack underflow!";
         }

         int peek () {
            if(top >= 0)
            return arr[top];
            else {
                cout << "Stack is empty!";
                return -1;
            }
         }

         bool isEmpty() {
            if(top == -1)
            return true;
            else
            return false;
         }
};

int main()
{
    Stack s(7);

    s.push(2);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(23);
    s.push(56);
    s.push(31);

    cout<< s.peek() << endl;
    s.pop();
    
    cout << s.peek() << endl;
    
    cout << s.isEmpty() << endl;
   
    return 0;
    
}
