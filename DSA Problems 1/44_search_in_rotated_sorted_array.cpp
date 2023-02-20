// To searchan element in a rotated sorted array.

#include <iostream>
using namespace std;

int search ( int arr[] , int size , int s , int e , int key )
{
    
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
    int arr[100] , size , s , e , key;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < size; i++ )
    cin >> arr[i];

    cout << " Enter the start element of array : ";
    cin >> s;

    cout << " Enter the end element of array : ";
    cin >> e;

    cout << "Enter the element to search for : ";
    cin >> key;
    
    cout << search ( arr , size , s , e , key );
    return 0;
}