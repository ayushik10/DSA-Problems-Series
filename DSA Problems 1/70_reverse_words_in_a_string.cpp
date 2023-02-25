// To reverse words in a string.

#include <bits/stdc++.h> 
using namespace std;

string reverseWords(string s)
{
        string ans = "";

        for (int i = s.length()-1; i >= 0; i--){
            
            while (i >= 0 && s[i] == ' '){
                i--;
            }
            string temp;

            while (i >= 0 && s[i]!= ' '){
                 temp.push_back(s[i]);
                
                i--;
            } 
            reverse (temp.begin() , temp.end());
            ans = ans + temp; 
           ans = ans + ' ';
        }
        while (ans[ans.length()-1] == 0){
            ans.pop_back();
        }
        cout << ans;
}
int main()
{
    string s ;

    cout << "Enter a string : " ;
    getline (cin , s);

    cout << "Reversed string : " ;
    reverseWords (s);
    return 0;
}