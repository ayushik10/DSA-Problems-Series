// To calculate the power of a given number.

#include<bits/stdc++.h>
using namespace std;

int power(int a , int b)
{
    //base case
    if(b == 0)
    return 1;

    if(b == 1)
    return a;
    
    int ans = power(a , b/2);

    //when b is even
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    
    cout << "Enter the value for a and b : ";
    cin >> a >> b;

    cout << "Power = " << power(a,b) << endl;

    return 0;
}