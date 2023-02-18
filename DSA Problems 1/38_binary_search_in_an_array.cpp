// To implement Binary Search in an array.

#include <iostream>
using namespace std ;

 /*void printArray ( int arr[] , int size)
{
    for ( int i = 0; i <size; i++)
    cout << arr[i] << " ";

} */

int binarySearch ( int arr [] , int size , int key )
{
    int start = 0; 
    int end = size - 1;

    while ( start <= end){
      int  mid = (start + end) / 2;
        if ( arr[mid] == key)
        {
            cout <<  "The element is found at postion " << mid + 1 << endl;
            return 0;
        }
        else if ( key < arr[mid] )
        {
             end = mid - 1;
        }
        else  
        start = mid + 1;
    }
    cout << " The element is not present in the array . " << endl;
    return 0;
}

int main ()
{
    int arr[100] , size , key ;
    
    cout << " Enter the size of array : " ;
    cin >> size;

    cout << "Enter the elements of array : " << endl;
    for ( int i = 0 ; i <size ; i++ )
    cin>> arr[i];

    cout << "Enter the element to search for : " ;
    cin >> key ;

    binarySearch ( arr , size , key );
    return 0;
}