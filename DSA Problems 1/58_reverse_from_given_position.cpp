// To reverse an array from given position.

#include <iostream>
using namespace std;

void reverseArray(int A[] , int size ,int pos )
{
    int start = pos + 1 , end = size-1;;
    while (start < end)
    {
        swap(A[start], A[end]);
        start++;
        end--;
    }
}
void showArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[100] , size , pos ;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of array : " << endl;
    for ( int i = 0; i < size; i++ )
    cin >> arr[i];

    cout << "Enter the position to reverse from : " ;
    cin >> pos;

    cout << "Reversed array : " <<endl;
    reverseArray(arr, size , pos);
    showArray(arr, size);
    return 0;
}