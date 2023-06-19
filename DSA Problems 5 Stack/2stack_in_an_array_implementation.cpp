#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
         int *arr;
         int top1;
         int top2;
         int size;

         Stack(int size) {
            this->size = size;
            top1 = -1;
            top2 = size;
            arr = new int[size];
         }

         //push in stack1
         void push1(int e) {
            if(top2-top1 > 1) {
                top1++;
                arr[top1] = e;
            }
            else
            cout << "Stack Overflow!" << endl;
         }

        //push in stack2
         void push2(int e) {
            if(top2-top1 > 1) {
                top2--;
                arr[top2] = e;
            }
            else
            cout << "Stack Overflow!" << endl;
         }
         
         //pop from stack1
         int pop1() {
            if(top1 >= 0) {
                int ans = arr[top1];
                top1--;
                return ans;
            }  
            else {
                cout << "Stack Underflow!" << endl;
                return -1;
            }
         }

         //pop from stack2
          int pop2() {
            if(top2 < size) {
                int ans = arr[top2];
                top2++;
                return ans;
            }  
            else {
                cout << "Stack Underflow!" << endl;
                return -1;
            }
         }
};

int main()
{
    Stack s(5);

   s.push1(23);
   s.push2(34);

   s.push1(23);
   s.push1(56);
   s.push2(78);

   s.pop2();
   s.pop1();

   return 0;
}