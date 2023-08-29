#include<iostream>
#include<vector>
using namespace std;


/* RECURSION + MEMOIZATION 
   TC - O(N)
   SC - O(N)+O(N) = O(N)
*/

int fibRec(int n, vector<int> &dp)
{
    //base case
    if(n==0 || n==1)
    return n;

    // STEP-3
    if(dp[n] != -1)
    return dp[n];

    // STEP-2
    dp[n] = fibRec(n-1, dp)+fibRec(n-2, dp);
    return dp[n];
}


/* TABULATION
   TC - O(N)
   SC - O(N)
*/

int fibTab(int n)
{
    // STEP-1
    vector<int> dp(n+1);

   // STEP-2
    dp[0] = 0;
    dp[1] = 1;

    // STEP-3
    for(int i=2; i<=n; i++)
    dp[i] = dp[i-1]+dp[i-2];

    return dp[n];
}


/* SPACE OPTIMISATION 
   TC - O(N)
   SC - O(1)
*/

int fibSpc(int n)
{
    int curr;
    int prev1 = 0;
    int prev2 = 1;

    //if(n==0)
    //return 0;

    for(int i=2; i<=n; i++) {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return curr;
}

int main() 
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // STEP-1
    vector<int> dp(n+1);
    for(int i=0; i<=n; i++) 
    dp[i] = -1;

    cout << "Nth Fibonacci No is ";

    //cout << fibRec(n, dp) << endl;
    //cout << fibTab(n) << endl;
    cout << fibSpc(n) << endl;

    return 0;
}