#include<bits/stdc++.h>
using namespace std;

void phoneKeypad(string digits , vector<string>& sol , string output , string mapping[] , int index)
{
    if(index == digits.length()){
        sol.push_back(output);
        return;
    }
    int number = digits[index]-'0';
    string str = mapping[number];

    for(int i=0 ; i<str.length() ; i++){
        output.push_back(str[i]);
        phoneKeypad(digits , sol , output , mapping , index);
        output.pop_back(); //backtracking call
    }
}
vector<string> letterCombination(string digits)
{
    vector<string> sol;
    if(digits.length() == 0)
    return sol;

    string output;
    int index = 0;
    string mapping[10] = {"" ,"" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

    phoneKeypad(digits , sol , output , mapping , index);
    return sol;
}
int main()
{
   string str;

   cout << "Enter a string : ";
   getline(cin , str);
   
   vector<string> answer =  letterCombination(str);

   cout << "letter combinations :  "  << endl;

   for(int i=0 ; i<answer.size() ; i++){
    cout << answer[i] << " ";
   }

    return 0;
}