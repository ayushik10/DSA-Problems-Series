// To check presence of permutation of a string within another entered string.

#include <bits/stdc++.h> 
using namespace std;

bool checkInclusion(string s1, string s2)
{
        
        if (s1.length() > s2.length()){
            return 0;
        }
        vector<int> count1(26,0);
        vector<int> count2(26,0);
        int n = s1.length();

        for (int i = 0; i < n; i++){

            int index1 = s1[i] - 'a';
            count1[index1]++;

            int index2 = s2[i] - 'a';
            count2[index2]++;

        }
        if (count1 == count2){
            return 1;
             }
             
        for (int i = n; i <s2.length(); i++){
            int newIndex = s2[i] - 'a';
            int oldIndex = s2[i-n] - 'a';

            count2[newIndex]++;
            count2[oldIndex]--;

        if (count1 == count2){
            return 1;
            }
        }
        
        return 0;
    }
int main()
{
    string s1 , s2;

    cout << "Enter a substring : " ;
    getline(cin , s1);

    cout << "Enter a string : ";
    getline(cin , s2);

    if (checkInclusion(s1 , s2)){
        cout << "Permutation exists " << endl;
    }
    else{
        cout << "Permutation does not exists " << endl;
    }

    return 0;
}
