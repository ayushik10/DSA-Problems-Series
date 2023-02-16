// To find the duplicate element in an array.

#include<iostream>
using namespace std;

int duplicateElement ( int arr[] , int size )
{
   int duplicate = 0;
    for ( int i = 0; i < size; i ++){
        duplicate = duplicate ^ arr[i];
    }
    for ( int i = 0; i < size; i ++){
        duplicate = duplicate ^ i;
    }
    return duplicate ;
 }
 int main()
{
    int arr[100], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Duplicate element in the given array is : " << duplicateElement(arr, size)<<endl;
    return 0;
}