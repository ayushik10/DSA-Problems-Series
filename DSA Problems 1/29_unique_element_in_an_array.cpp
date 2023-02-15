// To find the unique element in an array.

#include <iostream>
using namespace std;
    
int unique(int arr[], int n)
{
    int uniqueElement = 0;
    for (int i = 0; i < n; i++)
    {
        uniqueElement = uniqueElement ^ arr[i];
    }
    return uniqueElement;
}
int main()
{
    int arr[100], n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for ( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }

    cout << "The unique element in the given array is : " << unique(arr, n) << endl;
    return 0;
}