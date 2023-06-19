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

void insertSorted(stack<int>& s, int data) {
    if(s.empty() || (!s.empty() && s.top() <= data)) {
        s.push(data);
        return;
    }

    int top=s.top();
    s.pop();
    insertSorted(s, data); //recursive call
    s.push(top);
}

void sortStack(stack<int>& s) {
    if(s.empty())
    return;

    int top=s.top();
    s.pop();

    sortStack(s);
    insertSorted(s, top);
}

int main()
{
    stack<int> s;

    input(s);
    cout << "Before Sorting : ";
    print(s);

    cout << "After Sorting : ";
    sortStack(s);
    print(s);

    return 0;

}