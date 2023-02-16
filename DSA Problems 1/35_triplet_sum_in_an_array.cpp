// To print the triplet of the given sum in an array.

#include <iostream>
using namespace std;

void printArray( int arr[] , int size )
{
    for ( int i = 0; i < size ; i++ ){
        cout << arr[i] << " ";
    }
}

void  triplet ( int arr[], int size , int sum )
{
    for ( int i = 0 ; i < size-2 ; i++ ){

        for( int j = i+1; j < size-1 ; j++ ){

            for ( int k =i+2 ; k < size ; k++ ){
            
            if ( arr[i] + arr[j] + arr[k] == sum ) 

            cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }   
        }
    }
}
int main()
{
    int arr[100], size , sum;

    cout << "Enter the size of array : ";
    cin >> size;

    cout <<" Enter the sum : ";
    cin >> sum;

    cout << "Enter the elements of array : ";
    for ( int i = 0; i <size; i++ ){
        cin >> arr[i];
    }
    cout << "Triplet of given sum in an array : " << endl;
     triplet ( arr, size , sum);
    
       return 0;
}