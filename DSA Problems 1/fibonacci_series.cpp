// To print fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 1;
    int n, temp;

    cout << " Enter a number : ";
    cin >> n;

    cout << "Fibonacci Series : ";
    cout << first << " " << second;

    for (int i = 3; i <= n; i++)
    {
        temp = first + second ;
        first = second;
        second = temp;
        cout << " " << temp;
    }
    cout << endl;
    return 0;
}