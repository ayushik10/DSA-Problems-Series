/*
    A B C
    B C D
    C D E   
           */

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = 'A' + col + row - 2;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
