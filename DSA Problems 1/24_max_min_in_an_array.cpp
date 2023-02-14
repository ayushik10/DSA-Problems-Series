// To find the minimum and maximum element in an array.

#include <iostream>
using namespace std;
 

int minElement ( int arr[] , int n )
{
    int s = 0;
    int min = arr[s];

    //while ( s < n )
    for ( ; s < n ; s++ )
    {
        if ( arr [s] < min )
        {
            min = arr[s];
        }
      //  s++;
    }
    return min;
}

int maxElement ( int arr[] , int n )
{
    int s = 0;
    int max = arr[s];

    //while ( s < n )
    for ( ; s < n; s++ )
    {
        if ( arr[s] > max )
        {
            max = arr [s];
        }
       // s++;
    }
    return max;
}

int main ()
{
    int arr[100] , size ;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < size ; i++ )
    cin >> arr[i];
    
    cout << "Minimum Element of the array is : " << minElement ( arr , size ) << endl;
    cout << "Maximum Element of the array is : " << maxElement ( arr , size ) << endl;
    
    return 0;

}