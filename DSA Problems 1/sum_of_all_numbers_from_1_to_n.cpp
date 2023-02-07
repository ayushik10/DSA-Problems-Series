// To find the sum of all numbers from 1 to n. 

#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum =0;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i=1; i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum from 1 to "<<n<<" is "<<sum;
    cout<<endl;
return 0;
}