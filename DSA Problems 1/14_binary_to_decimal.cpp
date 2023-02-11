// To convert binary number to decimal.

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n ;
    int ans = 0;
    cout << "Enter a binary number : ";
    cin >> n;

    int i = 0;
    while ( n != 0){
        int digit = n % 10;
        ans = ans + (digit * pow(2,i) );
        n = n/10;
        i ++;
    }
    cout << "Binary to Decimal = " << ans << endl;
    return 0;
}