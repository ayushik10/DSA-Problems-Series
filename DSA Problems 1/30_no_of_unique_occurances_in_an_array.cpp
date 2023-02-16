// To check the number of unique occurances in an array

#include<iostream>
using namespace std;

void printArray( int arr[] , int n )
{
    for ( int i = 0; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }
}
int uniqueOccurance( int arr[] , int n )
{
    int x;
    int count = 0;
    int unique = 0;
    for ( int i = 0; i < n; i++ ){
     unique = unique ^ arr[i];
    x = unique;
    
    count = count + 1;
    }
      return count ;
}
int main()
{
    int arr[100], n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The number of  unique element in the given array is : " << uniqueOccurance(arr, n)<<endl;
    return 0;
}