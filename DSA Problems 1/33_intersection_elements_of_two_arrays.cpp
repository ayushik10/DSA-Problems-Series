// To find the intersection elements of two arrays.

#include<iostream>
using namespace std;

void printArray( int arr[] , int brr[], int n, int m )
{
    for ( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
     for ( int j = 0; j < m ; j++ ){
        cout << brr[j] << " ";
    }
}
void intersection (int arr[] , int brr[], int n , int m)
{
    for ( int i = 0; i <n; i++ )
    {
        for ( int j = 0; j <m; j++ )
        {
               if ( arr[i] == brr[j] )
               {
                cout << arr[i] << " " ;
            }
        }
    }
}
int main()
{
    int arr[100], brr[100];
    int n, m ;

    cout << "Enter the size of arrays : ";
    cin >> n >> m;

    cout << "Enter the elements of first array : ";
    for ( int i = 0; i <n; i++ ){
        cin >> arr[i];
    }
    cout << "Enter the elements of second array : ";
    for ( int j = 0; j <m; j++ ){
        cin >> brr[j];
    }
    cout << "Intersection elements in the given arrays : " << endl;
     intersection ( arr , brr, n , m );
    
       return 0;
}