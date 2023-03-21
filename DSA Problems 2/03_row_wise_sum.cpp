// To print row wise sum of a 2-D array.

#include <iostream>
using namespace std;

void rowSum (int arr[][3])
{
    for (int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main ()
{
    int arr[3][3];

    cout << "Enter the elements : ";

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }

    cout << "Row wise sum : " << endl;
    rowSum (arr);
    return 0;
}
