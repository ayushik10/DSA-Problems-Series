// To print the elements like a wave.

#include <iostream>
using namespace std;

int main ()
{
    int arr[3][4];

    cout << "Enter the elements : ";

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }
    
    cout << "Printing Array " << endl;

    for (int col= 0; col < 4; col++){

        if (col & 1){ 
        for (int row = 2; row >= 0; row--)
            cout << arr[row][col] << " ";
        
        }
        else
        {
        for (int row = 0; row < 3; row++)
            cout << arr[row][col] << " ";
        }
    }
    
    return 0;

}