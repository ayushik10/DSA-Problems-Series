#include<bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> s;

    for(int i=0; i<str.length(); i++) {
        char ch=str[i];

        if(ch =='(' || ch =='{' || ch =='[')
        s.push(ch);

        else {
            if(!s.empty()) {
                char top=s.top();

                if((ch ==')' && top =='(') || (ch =='}' && top =='{') || (ch ==']' && top =='['))
                s.pop();
                else
                return false;
            }
        }
    }

    if(s.empty())
    return true;
    else
    return false;
}

int main() 
{
    string s;
    
    cout << "Enter the parenthesis : ";
    getline(cin, s);

    if(isValid(s))
    cout << "Valid Parenthesis" << endl;
    else
    cout << "Not valid" << endl;

    return 0;

}
