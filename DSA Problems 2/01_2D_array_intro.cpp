//To create , take input and print a 2-D array.

#include <iostream>
using namespace std;

int main ()
{
    int arr[3][4];

    cout << "Enter the elements : ";

    // to take input in a 2-D array
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    cout << "Print array : " << endl;

    // to print a 2-D array row wise

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    /* to print a 2-D array column wise

    for (int col = 0; col < 4; col++){
        for (int row = 0; row < 4; row++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }  */
    
    return 0;
}