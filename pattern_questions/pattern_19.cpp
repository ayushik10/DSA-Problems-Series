/*
    *
   **
  ***
 ****
          */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {

        int col = 1;
        while (col <= n - row)
        {
            cout << "  ";
            col++;
        }
        while (col <= n)
        {
            cout << "*"<<" ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}