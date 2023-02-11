// To convert negative decimal into binary.

#include <bits/stdc++.h>
using namespace std ;

bool isPowerOfTwo( int n )
{
    return ( n && !(n & (n-1)));
}

int main()
{
    int n ;

    cout << " Enter a negative decimal number : ";
    cin >> n;

    int temp = n*(-1);
    temp = (~temp);
    temp = temp+1;

    string ans ;
    while ( temp != -1 )
    {
        int bit = temp & 1;
        char ch = '0' + bit ;
        ans.push_back(ch);

        temp = temp >> 1;
    }
    
    if ( isPowerOfTwo(-1 * n))
    {
        ans.push_back('1');
    }
    
    reverse ( ans.begin (), ans.end ());
    
    cout << "Answer = " << ans ;
    return 0;
}
