// To remove all occurances of a given substring from a string.

#include <bits/stdc++.h> 
using namespace std;

string removeOccurrences(string s, string part) 
{
        
     while (s.length() != 0 && s.find(part) < s.length())
    {
    s.erase(s.find(part) , part.length());
    }
      return s;
}

int main ()
{
    string str , part;

    cout << "Enter a string :" ;
    cin >> str;

    cout << "Enter the part to remove : ";
    cin >>  part;

    cout << "String after removal of given substring : " << removeOccurrences (str , part) << endl;

    return 0;
}
