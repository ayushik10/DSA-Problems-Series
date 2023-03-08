// To check whether the given array is sorted or not using recursion.

#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size)
{
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1])
    return false;
    else
    return isSorted(arr+1 , size-1);

}

int main()
{
    int arr[100], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i=0 ; i<size ; i++)
    cin >> arr[i];

    if (isSorted(arr, size))
    cout << "The array is Sorted ";
    else
    cout << "The array is not Sorted " << endl;

    return 0;

}