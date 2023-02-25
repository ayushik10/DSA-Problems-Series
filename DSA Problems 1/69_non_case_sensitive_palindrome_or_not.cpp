// To check whether a string is (non-case sensitive) palindrome or not (II).

#include <bits/stdc++.h> 
using namespace std;

bool specialCharacters (char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    return false;
    else
    return true;
}
char toLowerCase (char ch)
{
    if(ch >= 'a' && ch <= 'z'){
    return ch;
    }
    else
    {
   char temp = ch - 'A' + 'a';
   return temp;
}
}
bool checkPalindrome (string str)
{
    int s = 0;
    int e = str.length()-1;

    while (s < e)
    {
        while (s<e && (specialCharacters(str[s])))
        s++;
        while(s<e && (specialCharacters(str[e])))
        e--;

        if ((toLowerCase(str[s])) != (toLowerCase(str[e])))
        return false;
        
        else
        {
        s++;
        e--;
        }
    }
     return true;
}

int main ()
{
    string str;

    cout << "Enter a string : ";
    cin >> str;
    
    if (checkPalindrome(str))
    cout << "Palindrome";

    else 
    cout << "Not Palindrome";

    return 0;
}