// To check whether the given array is sorted and rotated or not.

#include <iostream>
#include <vector>
using namespace std;

bool sortedRotated(vector<int> arr)
{
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }

    if (count <= 1)
        return true;
    else
        return false;
}
int main()
{
    vector<int> arr;
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    if (sortedRotated(arr))
    {
        cout << "The array is sorted and rotated !";
    }
    else
    {
        cout << "The array is not sorted and rotated !";
    }
    return 0;
}