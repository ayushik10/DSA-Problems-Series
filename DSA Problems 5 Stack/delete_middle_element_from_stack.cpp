#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& inputStack, int count, int size) {

    //base case
    if(count == size/2) {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack, count+1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>& inputStack, int size) {
    int count = 0;

    solve (inputStack, count, size);
}

int main()
{
    stack<int> s;

    s.push(45);
    s.push(14);
    s.push(99);
    s.push(6);
    s.push(78);

    int n = s.size();

    cout << "Size of stack before deleting middle element : " << s.size() << endl;
    deleteMiddle(s, n);
    cout << "Size of stack after deleting middle element : " << s.size() << endl;

    return 0;
}