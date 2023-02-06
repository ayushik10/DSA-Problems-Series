/*
           *
          * *
         * * *
        * * * *
       * * * * *
        * * * *
         * * * 
          * *
           *                        */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = 1;
        while (space <= n - row)
        {
            cout << " ";
            space++;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    row = 2;
    while (row <= n)
    {
        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*"
                 << " ";
            col++;
        }

        cout << endl;
        row++;
    }
    return 0;
}