//To reverse a string using recursion.

#include<bits/stdc++.h>
using namespace std;

void reverse(int s , int e , string& str)
{
    //base case
    if(s > e)
    return ;
    
    swap(str[s++] ,str[e--]);

    reverse(s , e , str);
}
int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin , str);

    reverse(0 , str.length()-1 , str);
    
    cout << "Reversed string : " << str << endl;
    
    return 0;
}