/*
     1
     2 1
     3 2 1
     4 3 2 1
               */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter a number : ";
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int count = row;
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            col++;
            count--;
        }
        cout << endl;
        row++;
    }
    return 0;
}