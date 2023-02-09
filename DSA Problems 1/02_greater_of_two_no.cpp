// To greater of two entered numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    switch (a>b)
    {
    case 0:
            cout<<"The number "<<b<<" is greater"<<endl;
    break;
    case 1:
            cout<<"The number "<<a<<" is greater"<<endl;
    break;

    }
    return 0;
}
