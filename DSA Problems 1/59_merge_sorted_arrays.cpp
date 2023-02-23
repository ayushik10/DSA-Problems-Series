// To merge two sorted arrays.

#include <iostream>
using namespace std;

void showArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void  mergeArrays ( int arr[] , int n , int brr[] , int m , int A[] )
{
     int i = 0;
     int j = 0;
     int k = 0;

     while ( i < n && j < m )
     {
        if ( arr[i] < brr[j]){
            A[k++] = arr[i++];
        }
        else {
            A[k++] = brr[j++];
        }
     }

     while ( i < n ){
        A[k++] = arr[i++];
     }

     while ( j < m ){
        A[k++] = brr[j++];
     }
}
int main ()
{
    int arr[100] , brr[100] , A[100] , n, m ;

    cout << " Enter the size of first array : ";
    cin >> n;

    cout << " Enter the elements of first array : ";
    for ( int i = 0 ; i < n ; i++ )
    cin >> arr[i] ;

    cout << " Enter the size of second array : ";
    cin >> m;

    cout << " Enter the elements of second array : ";
    for ( int i = 0 ; i < m ; i++ )
    cin >> brr[i] ;

    int size = n + m;

    cout << " Merged array : " ;
    mergeArrays ( arr , n , brr , m , A );
    showArray (A , size);
    
    return 0;
}