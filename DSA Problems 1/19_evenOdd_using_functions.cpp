// To check the given number is even or odd using functions.

#include<iostream>
using namespace std;

void isEven(int n)
{
if(n%2==0)
 cout<<"Even number"<<endl;
 else
 cout<<"Odd number"<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    isEven(n);
    return 0;
}