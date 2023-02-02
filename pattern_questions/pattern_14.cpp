/*
     A 
     B C
     D E F
     G H I J*/

#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    int row = 1;
    char ch = 'A';

    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<ch<<" ";
            col=col+1;
            ch=ch+1;
        }
       cout<<endl;
       row=row+1;
    }
    return 0;
    
}