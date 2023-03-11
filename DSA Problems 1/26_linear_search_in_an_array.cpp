// To implement linear search in an array.

#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index position : " << i << endl;
//             return 0;
        }
    }
    cout << "Element is not present in the array" << endl;
}
int main()
{
    int arr[100] , size , key ;

    cout << "Enter the size of the array : " ;
    cin >> size;

    cout << "Enter the elements of the array : " ;
    for ( int i = 0 ; i < size ; i++ )
    cin >> arr[i];

    cout << "Enter the element to search for : " ;
    cin >> key;

    linearSearch( arr, size , key );
    return 0;
}
