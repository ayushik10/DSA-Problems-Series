// To display the counting from 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter a number :";
    cin>>n; 
    
    cout<<"Counting from 1 to "<<n<<" :"<<endl;
    for(int i=1;i<=n;i++)
    {
    
        cout<<i<<endl;
    } 
    cout<<endl;
    return 0;
}