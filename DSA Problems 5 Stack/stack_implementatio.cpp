#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(15);
    s.push(67);
    s.push(55);

    cout << "Before pop---> " << endl;
    cout << "Size of the stack : " << s.size() << endl;
    cout << "Top element of the stack : " << s.top() << endl;

    s.pop();
    
    cout << "After pop---> " << endl;
    cout << "Size of the stack : " << s.size() << endl;
    cout << "Top element of the stack : " << s.top() << endl;

    if(s.empty()) 
    cout << "Stack is empty!" << endl;
    else
    cout << "Stack is not empty!" << endl;

    return 0;
}