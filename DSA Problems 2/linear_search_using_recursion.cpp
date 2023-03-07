// To implement linear search using recursion.

#include<iostream>
using namespace std;

bool linearSearch(int arr[] , int size , int key)
{
    //base case
    if(size == 0)
    return false;

    if(arr[0] == key)
    return true;
    else
    return linearSearch(arr+1 , size-1, key);
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

    if(linearSearch(arr , size , key))
    cout << "Element found ";
    else
    cout << "Element not found " << endl;

    return 0;
}
