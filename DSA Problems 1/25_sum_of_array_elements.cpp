//To find the sum of all elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    cout << "Enter the size of an array : " << endl;
    cin >> n;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < n; i++ )
    cin >> arr[i];
    
    int sum = 0;

    for ( int i = 0; i < n; i++ )
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array elements is " << sum << endl;
    return 0;
}