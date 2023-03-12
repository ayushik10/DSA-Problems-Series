// To find the sum of array elements using recursion.

#include<iostream>
using namespace std;

int sum(int arr[], int size)
{
    if (size == 0)
    return;

    return sum(arr[0]) +
}
int main()
{
    int arr[100], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : ";
    for(int i=0 ; i<size ; i++)
    cin >> arr[i];

    cout << "Sum of array elements is " << sum(arr , size) << endl;

    return 0;

}