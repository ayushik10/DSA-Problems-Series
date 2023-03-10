// To implement binary search using recursion.

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start , int end , int key )
{
    if(start > end)
    return false;

    int mid = start + (end-start)/2;

    if(arr[mid] == key)
    return true;

    else if (arr[mid] > key)
    return binarySearch(arr , start , mid-1 , key);

    else
    return binarySearch(arr , mid+1 , end , key);
}

int main()
{
    int arr[100] , size , key;

    cout << "Enter the size of array : ";
    cin >> size;
    
    cout << "Enter the elements of array : ";
    for(int i=0 ; i<size ; i++)
    cin >> arr[i];

    cout << "Enter the element to search for : ";
    cin >> key;

    if(binarySearch(arr ,0 , size-1 , key))
    cout << "Element found ";
    else
    cout << "Element not found " << endl;

    return 0;
}