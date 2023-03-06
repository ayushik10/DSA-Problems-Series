// To find factorial of a given number using recursion.

#include<iostream>
using namespace std;

int fact(int n)
{
    //base case
    if(n == 0)
    return 1;

    return n*fact(n-1);
}
int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    cout << "Factorial of " << n << " is " << fact(n);

    return 0;
}