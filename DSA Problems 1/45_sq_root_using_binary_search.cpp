// To find the square root of a number using binary search.

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
int main ()
{
    int n;
    
    cout << "Enter a number : " ;
    cin >> n;

    cout << "Square root of " << n << " is " << squareRoot (n);
    return 0;
}