// To check whether the entered number is a +ve , 0 or -ve .

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n>0)
    {
        cout<<" Positive number ."<<endl;
    }
    else if(n<0)
    {
        cout<<" Negative number."<<endl;
    }
    else
    cout<<" The number is Zero."<<endl;
    return 0;
}