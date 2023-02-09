// To check whether the character is uppercase , lowercase or a number.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character :";
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"UPPER CASE CHARACTER "<<endl;
    }
    else if ( ch>=97 && ch<=122)
    {
        cout<<"LOWER CASE CHARACTER "<<endl;
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"THE CHARACTER IS A NUMBER "<<endl;
    }
    else 
    cout<<"THE CHARACTER IS A SPECIAL SYMBOL"<<endl;
    return 0;
}
