// To swap the alternate elements in an array.

#include <iostream>
using namespace std;

void swapAlternates(int A[], int size)
{
    for (int index = 0; index < size; index = index + 2)
    {
        if (index + 1 < size)
            swap(A[index], A[index + 1]);
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
    int arr[100] , size ;

    cout << "Enter the size of the array : " ;
    cin >> size;

    cout << "Enter the elements of the array : " ;
    for ( int i = 0 ; i < size ; i++ )
    cin >> arr[i];

    swapAlternates(arr, size);
    showArray(arr, size);
    
    return 0;
}