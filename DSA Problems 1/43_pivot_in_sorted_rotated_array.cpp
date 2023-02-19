// To find pivot in a sorted rotated array.

#include <iostream>
using namespace std;

int pivot ( int arr[] , int size )
{
    int s = 0;
    int e = size-1;
    int mid = ( s+e )/2;

    while ( s<e ){
    if ( arr[mid] >= arr[0] ){
        s = mid+1;
    }
    else 
    e = mid - 1;
    mid = ( s+e )/2;
    }
    return s;
}

int main ()
{
    int arr[100] , size;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << " Enter the elements of array : " ;
    for ( int i = 0; i < size; i++ ){
    cin >> arr[i] ;
    }
    cout << "Pivot element : ";
    cout << pivot ( arr, size ) ;
    return 0;
}
