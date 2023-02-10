// To count the number of 1 bits (setbits) in a given number.

#include<iostream>
using namespace std;

int main()
{
    int n ;
    int count = 0;

    cout << "Enter a number : ";
    cin >> n;

    while ( n!= 0 ){
        
        
        if ( n&1 ){
            count ++ ;
        }
        n = n >> 1;
    }
    cout << "Number of 1 bits : " << count << endl;
      return 0;
}