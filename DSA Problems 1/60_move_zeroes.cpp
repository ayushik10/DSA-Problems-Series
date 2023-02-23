// To move zeroes to the right end of an array.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes( int nums[] , int n )
{

     int nonZero = 0;
        for ( int i = 0; i < n; i++ )
        {
            if ( nums[i] != 0 ){
            swap ( nums[i] , nums[nonZero] );
            nonZero ++ ;
            }
        }
}

void showArray ( int nums[] , int n)
{
    for ( int i = 0; i < n; i++ ){
    cout << nums[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int nums[100] , n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout <<"Enter the elements of array : ";
    for ( int i = 0; i < n; i++ )
    {
    cin >> nums[i];
    }
    cout << "Array after moving zeroes to right : ";
    moveZeroes ( nums , n);
    showArray ( nums , n);

    return 0;
}