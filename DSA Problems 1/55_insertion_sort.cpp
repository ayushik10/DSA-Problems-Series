// To implement insertion sort on an array.

#include <iostream>
using namespace std ;

void printArray ( int arr[] , int size )
{
    for ( int i = 0 ; i < size ; i++ )
    cout << arr[i] << " " ;
}
void insertionSort ( int arr[] , int size )
{
     for ( int i = 1; i < size ; i++ ){
     int element = arr[i];
     int j = i-1;
     
     while ( j >= 0 ){
        if ( arr[j] > element)
        {
            arr[j+1] = arr[j];
        }
        else 
        break;
        j--;
     }
        arr[j+1] = element;
  }
}
int main ()
{
    int arr[100] , size ;
    
    cout << "Enter the size of array : " ;
    cin >> size;

    cout << "Enter the elements of the array : " << endl;
    for ( int i = 0; i < size ; i++ )
    cin >> arr[i];
   
    cout << "Array before sorting : " << endl;
    printArray ( arr , size );

    cout << endl << "Array after sorting : " << endl;
    insertionSort ( arr , size ); 
    printArray ( arr , size );

    return 0;
}