// To searchan element in a rotated sorted array.

#include <iostream>
using namespace std;

int search ( int arr[] , int size  , int key )
{
    int s = 0;
    int e = size -1;
    int mid = ( s+e)/2;

    while ( s <= e ){

        if ( arr[mid] == key )
        return mid ;

        else if ( arr[mid] > key)
        e = mid -1;

        else
        s = mid +1;
    }
    return -1;
}
int main ()
{
    int arr[100] , size , key;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < size; i++ )
    cin >> arr[i];

    cout << "Enter the element to search for : ";
    cin >> key;
    
    cout << search ( arr , size , key );
    return 0;
}
