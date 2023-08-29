#include<bits/stdc++.h>
using namespace std;


/* RECURSION
   TC - exponential
*/

int solveRec(vector<int> nums, int n)
{
    if(n<0) 
    return 0;

    if(n==0) 
    return nums[0];

    int incl = solveRec(nums, n-2) + nums[n];
    int excl = solveRec(nums, n-1) + 0;

    return max(incl, excl);
}


/* RECURSION + MEMOIZATION
   TC - O(N)
   SC - O(N)+O(N) = O(N)
*/

int solveMem(vector<int> nums, int n, vector<int> dp)
{
    if(n<0) 
    return 0;

    if(n==0) 
    return nums[0];

    if(dp[n] != -1)
    return dp[n];

    int incl = solveRec(nums, n-2) + nums[n];
    int excl = solveRec(nums, n-1) + 0;

    dp[n] = max(incl, excl);

    return dp[n];
}


/* TABULATION
   TC - O(N)
   SC - O(N)
*/

int solveTab(vector<int> nums, int n)
{
    vector<int> dp(n+1, 0);

    dp[0] = nums[0];

    for(int i=i; i<n; i++)
    {
        int incl = dp[i-2] + nums[i];
        int excl = dp[i-1] + 0;

        dp[i] = max(incl, excl);
    }
    return dp[n-1];
}


/* SPACE OPTIMISATION
   TC - O(N)
   SC - O(1)
*/

int solveSpc(vector<int> nums, int n)
{
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i=1; i<n; i++)
    {
        int incl = prev2 + nums[i];
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
    cout << "Enter the size : ";
    cin >> n;

    vector<int> arr;

    cout << "Enter the elements : ";
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    //int ans = solveRec(arr, n-1);

    //vector<int> dp(n, -1);
    //int ans = solveMem(arr, n-1, dp);

    //int ans = solveTab(arr, n);

    int ans = solveSpc(arr, n);

    cout << "Maximum Sum of Non-Adjacent elements is : " << ans << endl;

    return 0;
}