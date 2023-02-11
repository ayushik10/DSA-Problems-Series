// To reverse an integer.

#include<iostream>
using namespace std;

int main()
{
    int num ;
    cout << "Enter an integer: ";
    cin >> num;
    
    int reversed_integer = 0;

    while ( num != 0 )
    {
        int rem = num%10;
        reversed_integer  = reversed_integer*10+ rem ;
        num = num/10;
    }
    cout << reversed_integer;
    return 0;
}