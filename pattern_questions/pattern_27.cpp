/*
      1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1
                             */

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
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col = col + 1;
        }
        col = 1;
        while (col <= 2 * (row - 1))
        {
            cout << "*"
                 << " ";
            col = col + 1;
        }
        col = n - row + 1;
        while (col >= 1)
        {
            cout << col << " ";
            col = col - 1;
        }

        cout << endl;
        row = row + 1;
    }
    return 0;
}