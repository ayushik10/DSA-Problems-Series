// Permutations of string using recursion

#include<bits/stdc++.h>
using namespace std;

void solve(string str , vector<string>& ans , int index)
{
    //base case
    if(index >= str.size()){
        ans.push_back(str);
        return;
    }

    for(int i=index ; i<str.size() ; i++){
        swap(str[index] , str[i]);
        solve(str , ans , index+1);

        //back tracking
        swap(str[index] , str[i]);
    }
}
vector<string> permute(string& str)
{
    vector<string> ans;
    int i = 0;

    solve(str , ans , i);
    sort(ans.begin() , ans.end());
    return ans;
}
int main()
{
   string str;
   int n;
   cout << "Enter the size of string : ";
   cin >> n;

   cout << "Enter a string : ";
   cin >> str;
   
   vector<string> answer =  permute(str);

   cout << "Permutations of the given string :  "  << endl;

   for(int i=0 ; i<answer.size() ; i++){
    cout << answer[i] << " ";
   }

   return 0;

}
