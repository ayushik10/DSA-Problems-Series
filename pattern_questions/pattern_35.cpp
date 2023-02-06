/*
       1 * * * * * * * * 1
       1 2 * * * * * * 2 1
       1 2 3 * * * * 3 2 1
       1 2 3 4 * * 4 3 2 1
       1 2 3 4 5 5 4 3 2 1
                                */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter  a number : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << col << " ";
            col++;
        }
        col = 1;
        while (col <= (2 * n) - (2 * row))
        {
            cout << "*"
                 << " ";
            col++;
        }
        col = row;
        while (col >= 1)
        {
            cout << col << " ";
            col--;
        }

        cout << endl;
        row++;
    }
    return 0;
}