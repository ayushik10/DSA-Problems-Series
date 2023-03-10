// To print counting from 1 to 10 using recursion.

#include<iostream>
using namespace std;

void counting(int n)
{
    if(n == 0)
    return ;

   // cout << n << endl;
    counting(n-1); //recursive rotation
    cout << n << endl;
}

int main()
{
    cout << "Counting from 1 to 10 " << endl;
    counting(10);

    return 0;
}