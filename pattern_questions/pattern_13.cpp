/*
    A
    B B
    C C C
            */
           
#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    int row = 1;
    char ch = 'A';

    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<ch<<" ";
            col=col+1;
            
        }
       cout<<endl;
        row++;
        ch++;
        
    }
    return 0;
    
}