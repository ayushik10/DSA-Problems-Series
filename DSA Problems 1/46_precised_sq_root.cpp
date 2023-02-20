// To find more precised square root of a number.

#include <iostream>
using namespace std;

int squareRoot ( int n )
{
    int start = 0;
    int end = n-1;
    long long int ans = -1;

    while ( start <= end )
    {
        long long int mid = (start + end)/2;

        long long int square = mid * mid;

        if ( square == n ){
            return mid;
        }
        if ( square < n ){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        } 
    }
    return ans ;
}
double precisedSqRoot ( int n , int precision, int preAns)
{
    double factor = 1;
    double ans = preAns;

    for ( int i = 0 ; i < precision ; i++ )
    {
        factor = factor /10;
        double temp = ans ;

        for ( double j = ans ; j*j < n ; j = j + factor )
        ans = j;
    }
    return ans;
}

int main ()
{
    int n , preAns ;
    
    cout << "Enter a number : " ;
    cin >> n;
    
    preAns = squareRoot (n);

    cout << "More precised square root of " << n << " is " << precisedSqRoot ( n , 3 , preAns) << endl;
    return 0;
}