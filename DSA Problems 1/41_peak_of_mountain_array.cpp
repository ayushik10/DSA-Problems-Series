// To find the peak element of a mountain array.

#include <iostream>
using namespace std;

int peakElement ( int arr[] , int size )
{
    int start = 0, end = size - 1;
    int mid = (start + end)/2;

    while ( start < end ){

    if ( arr[mid] < arr[mid+1] ){
        start = mid + 1;
    }
    else 
    end = mid ;
    mid = (start + end) /2;

}
   return arr[start];
}
int main ()
{
    int arr[100] , size;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << " Enter the elements of array : " << endl;
    for ( int i = 0; i < size; i++ )
    cin >> arr[i];

    cout << "Peak element of the mountain array : " <<  peakElement ( arr, size ) ;
    return 0;
}
