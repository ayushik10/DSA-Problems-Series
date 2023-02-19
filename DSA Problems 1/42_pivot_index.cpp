// To find the pivot index in an array.

#include <iostream>
using namespace std ;

int pivotIndex ( int arr[] , int n )
{
   int sum [100] = {0};
   int x = 0;
   int leftSum = 0, rightSum = 0;

   for (int i = 0; i < n; i++ )
   {
    x = x + arr[i] ;
    sum[i] = x ;
   }
   for ( int i = 0 ; i < n ; i++ )
   {
    leftSum = sum[i] - arr[i];
    rightSum = sum [n-1] - sum[i] ;

    if ( leftSum == rightSum)
     return i ;
   }
     return -1;
}
int main()
{
    int arr[100] , n;

    cout << "Enter the size of array : " ;
    cin >> n;

    cout << "Enter the elements of array : ";
    for ( int i = 0 ; i < n ; i++ )
    cin >> arr[i];

    cout << "Pivot index = " << pivotIndex ( arr , n ) << endl;
    return 0;
}