// To sort all 0 & 1 in an array.

#include <iostream>
using namespace std;

void printArray( int arr[] , int size )
{
    for ( int i = 0; i < size ; i++ ){
        cout << arr[i] << " ";
    }
}
void sort01s ( int arr [], int size)
{ 
  int start = 0 ;
  int end = size-1;

  while ( start < end ){
    while ( start < end && arr[start] == 0 ){
        start++;
    }
    while ( start < end && arr[end] == 1 ){
        end --;
    }
    if ( start < end && arr[start]==1 && arr [end] == 0){
        swap ( arr[start] , arr[end] );
        start ++;
        end --;
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
    cout << " Array after sorting 0 and 1 : " << endl;
     sort01s ( arr , size );
     printArray ( arr, size);

    return 0;
 }
