// To check whether the entered number is prime or not.

#include <iostream>
using namespace std;

int main()
{
    int n, p = 0;
    cout << "Enter a number : ";
    cin >> n;
    if (n == 0 || n == 1)
        p = 1;

    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            p = 1;
            break;
        }
    }
    if (p == 0)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}