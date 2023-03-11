#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) 
{
        string temp;

        for(int i=0 ; i<s.length() ; i++){
            
            if(temp.length()==0)
            temp.push_back(s[i]);

            else{
                int l = temp.length();
                if(temp[l-1] == s[i])
                temp.pop_back();
                else
                temp.push_back(s[i]);
            }
        }
        return temp;
}
int main()
{
      string s;

      cout << "Enter a string : ";
      cin >> s;

      cout << "String after removal of adjacent duplicates : " << removeDuplicates(s) << endl;

      return 0;
}