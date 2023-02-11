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

    n = n*(-1);
    n = (~n);
    n = n+1;

    string ans ;
    while ( n != -1 )
    {
        int bit = n & 1;
        char ch = '0' + bit ;
        ans.push_back(ch);

       n = n >> 1;
    }
    if ( isPowerOfTwo(-1 *n))
    {
        ans.push_back('1');
    }
    reverse ( ans.begin (), ans.end ());
    
    cout << "Answer = " << ans ;
    return 0;
}