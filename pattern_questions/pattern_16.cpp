/*
    D
    C C
    B B B
    A A A A
              */

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + 4 - row;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}