// To convert decimal number to binary,

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int n ;
    float ans = 0;

    cout << " Enter a number : ";
    cin >> n;       
    
    int i = 0;
    while ( n!=0 ){
        int bit = n & 1;
        ans = ( bit * pow( 10,i )) + ans;
        n = n >> 1;
        i++ ;
        
    }       
    cout << " Binary conversion : "<< ans << endl;
    return 0; 
}
