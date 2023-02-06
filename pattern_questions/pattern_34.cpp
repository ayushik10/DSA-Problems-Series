/*
 *                 *
 * *             * *
 * * *         * * *
 * * * *     * * * *
 * * * * * * * * * *
 * * * *     * * * *
 * * *         * * *
 * *             * *
 *                 *               */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the number : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*"
                 << " ";
            col++;
        }

        col = 1;
        while (col <= (2 * n) - (2 * row))
        {
            cout << "  ";
            col++;
        }
        col = row;
        while (col >= 1)
        {
            cout << "*"
                 << " ";
            col--;
        }
        cout << endl;
        row++;
    }
    row = 2;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << "*"
                 << " ";
            col++;
        }
        col = 1;
        while (col <= 2 * (row - 1))
        {
            cout << "  ";
            col++;
        }
        col = n - row + 1;
        while (col >= 1)
        {
            cout << "*"
                 << " ";
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}