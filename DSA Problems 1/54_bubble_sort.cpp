// To implement bubble sort on an array.

#include <iostream>
using namespace std;

void printArray ( int arr[] , int size )
{
    for ( int i = 0 ; i < size ; i++ )
    cout << arr[i] << " " ;
}
void bubbleSort ( int arr[] , int size )
{
    for ( int i = 0 ; i < size - 1 ; i++ ){

        for ( int j = 0 ; j < size - i - 1  ; j++){
            
            if ( arr[j] > arr [j+1] )
            swap ( arr[j] , arr[j+1] );
        }
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
    bubbleSort ( arr , size ); 
    printArray ( arr , size );

    return 0;
}