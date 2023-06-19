#include<bits/stdc++.h>
using namespace std;

void input(stack<int>& s) {
    int size;

    cout<< "Enter the size : ";
    cin >> size;

    cout << "Enter the elements of the stack : ";
    for(int i=0; i<size; i++) {
        int temp;
        cin >> temp;
        s.push(temp);
    }
}

void print(stack<int> s) {
    cout << "Stack : ";
    
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void pushAtBottom(stack<int>& s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return;
    }

    int num=s.top();
    s.pop();

    //recursive call
    pushAtBottom(s, x);
    s.push(num);
}

int main()
{
    stack<int> s;

    input(s);
    cout << "Before insertion ";
    print(s);

    cout << "After insertion : ";
    pushAtBottom(s, 12);

    print(s);

    return 0;

}