// To count the number of 1 bits (setbits) in a given number.

#include<iostream>
using namespace std;

int setbits(int n)
{
    int count = 0;
    while ( n!= 0 ){
        
        
        if ( n&1 ){
            count++ ;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int n , m ;
    
    cout << "Enter two numbers : ";
    cin >> n >> m;

    cout << "Total setbits : " << setbits(n) + setbits(m) << endl;
    
      return 0;
}