#include<iostream>
#include<vector>
using namespace std;

/* RECURSION
   TC - 
   SC - 
*/

int solveRec(vector<int> cost, int n)
{
    if(n==0)
    return cost[0];

    if(n==1)
    return cost[1];

    return cost[n] + min(solveRec(cost, n-1), solveRec(cost, n-2));
}


/* RECURSION + MEMOIZATION
   TC - O(N)
   SC - O(N)+O(N) = O(N)
*/

int solveMem(vector<int> cost, int n, vector<int> dp) 
{
    if(n==0)
    return cost[0];

    if(n==1)
    return cost[1];

    if(dp[n] != -1)
    return dp[n];

    dp[n] = cost[n] + min(solveMem(cost, n-1, dp), solveMem(cost, n-2, dp));

    return dp[n];
}


/* SPACE OPTIMISATION
   TC - O(N)
   SC - O(1)
*/

int solveSpc(vector<int> cost, int n)
{
    int prev1 = cost[0];
    int prev2 = cost[1];

    for(int i=2; i<n; i++) {
        int curr = cost[i] + min(prev1, prev2);
        prev1 = prev2;
        prev2 = curr;
    }

    return min(prev1, prev2);
}

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;

    vector<int> cost;

    cout << "Enter the costs : ";
    for(int i=0; i<n; i++) 
    {
        int temp;
        cin >> temp;
        cost.push_back(temp);
    }

    //int ans = min(solveRec(cost, n-1), solveRec(cost, n-2));

    /*vector<int> dp(n+1, -1);
    int ans = min(solveMem(cost, n-1, dp), solveMem(cost, n-2, dp));*/

    //int ans = solveSpc(cost, n)

    //cout << "Minimum Cost of Climbing Stairs is : " << ans << endl;


   /* TABULATION
      TC - O(N)
      SC - O(N)
   */

    vector<int> dp(n+1, -1);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i=2; i<n; i++) 
    {
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
   
    cout << "Minimum Cost of Climbing Stairs is : " << min(dp[n-1], dp[n-2]) << endl;

    return 0;
}