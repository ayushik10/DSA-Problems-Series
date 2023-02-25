// To get the maximum occurred character in a string.

#include <bits/stdc++.h> 
using namespace std;

char maxOccChar (string s)
{
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
    int num = 0;
    num = s[i]-'a';
    arr[num]++;
    }
    
    int max = -1 , ans = -1;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i]){
        ans = i;
        max = arr[i];
        }

    }
    return ans + 'a';
}
int main ()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;
   
    cout << "Maximum occurred character --> " << maxOccChar(s) << endl;

    return 0;
}