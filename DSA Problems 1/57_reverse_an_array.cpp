// To reverse an array.

#include <iostream>
using namespace std;

void reverseArray(int arr[] , int size)
{
    int start = 0 , end = size-1;;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[100] , size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : " << endl;
    for ( int i = 0; i < size; i++ )
    cin >> arr[i];

    cout << "Reversed array : " <<endl;
    reverseArray(arr , size);
    showArray(arr , size);
    return 0;
}