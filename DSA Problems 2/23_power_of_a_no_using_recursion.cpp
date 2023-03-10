// To find the power of a number using recursion.

#include<iostream>
using namespace std;

int power(int num )
{
    //base case
    if(num == 0)
    return 1;

    return 2*power(num-1);
}

int main()
{
    int num;

    cout << "Enter a number : ";
    cin >> num;

    cout << "Power = " << power(num);

    return 0;
}