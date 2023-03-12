// To check whether the given string is palindrome or not using reursion.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str , int s , int e)
{
    //base case
    if(s > e)
    return true;

    if(str[s] != str[e])
    return false;

    isPalindrome(str , s+1 , e-1);
    
}
int main()
{
    string str;

    cout << "Enter a string : ";
    getline(cin , str);

    if(isPalindrome(str , 0 , str.length()-1)){
        cout << "The given string is Palindrome " << endl;
    }
    else{
        cout << "The given string is not Palindrome " << endl;
    }

    return 0;
}