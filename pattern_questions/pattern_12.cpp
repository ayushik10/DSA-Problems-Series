/*
    A B C 
    B C D 
    C D E 
             */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter a number : ";
    cin>>n;
    
    int row=1;
    
    while (row<=n)
    {
        char ch = 'A' + row-1;
        int col=1;
        while (col<=n)
        {
            cout<<ch<<" ";
            col = col+1;
            ch ++;
        }
        cout<<endl;
        row = row+1;
        
    }
    return 0;
}
