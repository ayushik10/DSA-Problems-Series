// To find the pairs of elements with given sum in an array .

#include <iostream>
using namespace std;

void printArray( int arr[] , int size )
{
    for ( int i = 0; i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

void  pairSum ( int arr[], int size , int sum )
{
    for ( int i = 0 ; i < size - 1 ; i++ ){

        for( int j = i+1; j < size ; j++){

            if ( arr[i] + arr[j] == sum ) 
            cout << arr[i] << "," << arr[j] <<endl;
            
        }
    }
}
int main()
{
    int arr[100], size , sum;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << " Enter the sum : ";
    cin >> sum;

    cout << "Enter the elements of array : ";
    for ( int i = 0; i <size; i++ ){
        cin >> arr[i];
    }
    cout << " Pair of given sum in an array : " <<endl;
     pairSum ( arr, size , sum );
    
       return 0;
}