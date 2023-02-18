#include <iostream>
using namespace std ;

int firstOccurance ( int arr [], int size , int element )
{
    int left = 0;
    int right = size - 1;
    int mid = left + (right - left) /2;
    int ans = -1;

     while ( left <= right ){

        if ( arr[mid] == element ){
             ans = mid ;
             right = mid - 1;
        }
            else if ( element < arr [mid] ){
                right = mid - 1;
            }
            else {
            left = mid + 1;
            }
            mid = left + (right - left) /2;
     }
       return ans;
}
int lastOccurance ( int arr [] , int size , int element )
{
    int left = 0 ;
    int right = size - 1;
    int mid  = left + ( right-left )/2;
    int ans = -1 ;

    while ( left <= right ){

        if ( arr[mid] == element ){
            ans = mid;
            left = mid + 1; 
            }
            else if ( element < arr[mid] ){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
            mid = left + ( right-left )/2;
    }
    return ans;
}
int main ()
{
    int arr[100] , size , element ;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << "Enter the elements of array : ";
    for ( int i = 0; i < size ; i++ )
    cin >> arr[i];

    cout << "Enter the element to check occurance : " ;
    cin >> element ;

    int firstOcc = firstOccurance ( arr, size, element );
    int lastOcc = lastOccurance ( arr, size , element ) ;


    cout << "Index Position Of First Occurance = " << firstOcc << endl;
    cout << "Index Position Of Last Occurance  = " << lastOcc << endl;

    return 0; 
}