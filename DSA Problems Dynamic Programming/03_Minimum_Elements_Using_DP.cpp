#include<bits/stdc++.h>
using namespace std;

/* RECURSION
   TC - exponential
*/

int solveRec(vector<int> nums, int x)
{
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;

    int mini = INT_MAX;

    for(int i=0; i<nums.size(); i++) 
    {
        int ans = solveRec(nums, x-nums[i]);

        if(ans != INT_MAX)
        mini = min(mini, 1+ans);
    }
    return mini;
}


/* RECURSION + MEMOIZATION
   TC - O(X*N)
   SC - O(X)
*/

int solveMemo(vector<int> nums, int x, vector<int> dp)
{
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;

    if(dp[x] != -1) return dp[x];

    int mini = INT_MAX;

    for(int i=0; i<nums.size(); i++) 
    {
        int ans = solveMemo(nums, x-nums[i], dp);

        if(ans != INT_MAX)
        mini = min(mini, 1+ans);
    }
    dp[x] = mini;

    return dp[x];
}


/* TABULATION
   TC - O(X*N)
   SC - O(X)
*/

int solveTab(vector<int> nums, int x)
{
    vector<int> dp(x+1, INT_MAX);

    dp[0] = 0;

    for(int i=1; i<=x; i++)
    {
        for(int j=0; j<nums.size(); j++)
        {
            if(i-nums[j] >= 0 && dp[i-nums[j]] != INT_MAX)
            dp[i] = min(dp[i], 1+dp[i-nums[j]]);
        }
    }
    //if(dp[x]==INT_MAX)
    //return -1;

    return dp[x];
}

int main()
{
    int n;
    cout << "Enter the total no  of Elements : ";
    cin >> n;

    vector<int> nums;

    cout << "Enter the Elements : ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    int target;
    cout << "Enter the target sum : ";
    cin >> target;

    int ans = solveRec(nums, target);
    
    //vector<int> dp(target+1, -1);
    //int ans = solveMemo(nums, target, dp);

    //int ans = solveTab(nums, target);

    if(ans == INT_MAX)
    cout << "Answer : " << -1;
    else
    cout << "Answer : " << ans;

    return 0;
}