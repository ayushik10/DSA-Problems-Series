// To sort all 0,1,2 in an array.

#include <iostream>
using namespace std;

void printArray( int arr[] , int size )
{
    for ( int i = 0; i < size ; i++ ){
        cout << arr[i] << " ";
    }
}

void sort012s ( int arr [], int size)
{ 
  int start = 0 ;
  int end = size-1;
  int mid = 0 ;

  while ( mid <= end ){
    if ( arr[mid] == 0 ){
        swap ( arr[start++] , arr[mid++] );
        
    }
     else if ( arr[mid] == 1 ){
        mid++;
        
    }
    else if ( arr[mid] == 2 ){
        swap ( arr[mid] , arr[end--] );
        
    }
   }
 }

 int main ()
 {
    int arr[100] , size ;

    cout << " Enter the size of the array : ";
    cin >> size ;

    cout << " Enter the elements of the array : " << endl;
    for ( int i = 0; i < size ; i++ ){
        cin >> arr[i];
    }
    cout << " Array after sorting 0, 1 and 2 : " << endl;
     sort012s ( arr , size );
     printArray ( arr, size);

    return 0;
 }
