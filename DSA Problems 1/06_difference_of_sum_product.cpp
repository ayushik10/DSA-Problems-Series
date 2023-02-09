// To subtract the product and sum of digits of an integer.

#include <iostream>
using namespace std;

int main()
{
    int num, product = 1, sum = 0;
    cout << " Enter a number : " << endl;
    cin >> num;

    while (num != 0)
    {
        product = product * ( num%10 ) ;
        sum = sum + ( num%10 ) ;
        num = num/10 ; 
    }
    int difference = product - sum;
    
    cout << "sum of digits of "  << " is " << sum << endl;
    cout << "product of digits of " << " is " << product << endl;
    cout << "difference of product and sum of digits is " << difference << endl;
    return 0;
}
