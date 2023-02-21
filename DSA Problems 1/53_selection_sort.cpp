// To imlement selection sort on an array.

#include <iostream>
using namespace std;

void printArray ( int arr[] , int size )
{
    for ( int i = 0 ; i < size ; i++ )
    cout << arr[i] << " " ;
}
void selectionSort ( int arr[] , int size )
{
    for ( int i = 0; i < size-1; i++ ){
      int min = i;
      for ( int j = i+1 ; j < size ; j++ ){
        if ( arr[j] < arr[min] )
        min = j;
      }
        swap ( arr[min] , arr[i] );
      
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
    selectionSort ( arr , size ); 
    printArray ( arr , size );

    return 0;
}