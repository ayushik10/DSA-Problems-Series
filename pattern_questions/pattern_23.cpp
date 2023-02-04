/*
         1
       2 2
     3 3 3
   4 4 4 4     */

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
            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}