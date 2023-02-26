// To create a compressed string according to the count of characters.

#include <bits/stdc++.h> 
using namespace std;

int compress(char ch[])
 {
        int i = 0;
        int ansIndex = 0;
        int n = ch.size();

        while (i < n){
            int j = i + 1;

            while (j < n && ch[i] == ch[j]){
                j++;
            }
            ch[ansIndex++] = ch[i];

            int count = j-i;

            if (count > 1){
                string c = to_string(count);
                for (char chr: c){
                    ch[ansIndex++] = chr;
                }
            }
            i = j;
        }
        return ansIndex;
 }
 int main ()
{
    char s[20];
    cout << "Enter a string : ";
    cin >> s;
   
    cout << "Compressed String --> " << compress(s) << endl;

    return 0;
}