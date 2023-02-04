/*
    A B C D
    A B C D
    A B C D
    A B C D
                */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter a number : ";
    cin >> n;
    
    int row = 1;

    while (row <= n)
    {
        char ch = 'A';
        int col = 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
