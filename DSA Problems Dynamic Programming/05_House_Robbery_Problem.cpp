#include<bits/stdc++.h>
using namespace std;

/* SPACE OPTIMISATION
   TC - O(N)
   SC - O(N)
*/

int solve(vector<int> valueInHouse)
{
    int n = valueInHouse.size();
    int prev2 = 0;
    int prev1 = valueInHouse[0];

    for(int i=1; i<n; i++)
    {
        int incl = prev2 + valueInHouse[i];
        int excl = prev1 + 0;

        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

int main()
{
    int n;
    cout << "Enter the total no of houses : ";
    cin >> n;

    vector<int> valueInHouse;

    cout << "Enter the Value in House : ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
       valueInHouse.push_back(temp);
    }

    if(n==1)
    cout <<  valueInHouse[0];
    
    vector<int> first, second;

    for(int i=0; i<n; i++)
    {
        if(i != n-1)
        first.push_back(valueInHouse[i]);

        if(i != 0)
        second.push_back(valueInHouse[i]);
    }

    int ans = max(solve(first), solve(second));
   
    cout << "Answer : " << ans << endl;
  
    return 0;
}