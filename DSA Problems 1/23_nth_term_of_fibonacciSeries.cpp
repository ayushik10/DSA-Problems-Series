#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int first = 0, second = 1;
    int temp;
     
    if ( n <= 2 )
    {
        return n-1;
    }
    
    for (int i = 3 ; i <= n; i++)
    {
        temp = first + second ;
        first = second;
        second = temp;
    }
    return temp;
}
int main()
{
    int term;
    cout << "Enter  the term to search for : ";
    cin >> term;

    cout << " Nth term of fibonacci series is " << Fibonacci(term);
    return 0;
}
