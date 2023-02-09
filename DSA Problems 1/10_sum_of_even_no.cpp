// To find the sum of all even numbers from 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n ;
    int sum=0;
    cout<<" Enter a number : ";
    cin>>n;
       
    for ( int i = 2; i <= n ; i = i+2 )
    {
        sum = sum + i;
    }
    cout<<"Sum :  "<<sum<<endl;
    return 0;
}
