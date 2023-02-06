/*
 * * * * *
  * * * * *
   * * * * *
    * * * * *
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
        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }
        int col = 1;
        while (col <= n)
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