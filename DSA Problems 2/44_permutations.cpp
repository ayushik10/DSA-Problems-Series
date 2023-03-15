#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums , vector<vector<int>>& ans , int index)
{
    //base case
    if(index >= nums.size()){
    ans.push_back(nums);
    return;
    }
    for(int j=index ; j<nums.size() ; j++){
        swap(nums[index] , nums[j]);
        solve(nums , ans , index+1);

        //backtrack
        swap(nums[index] , nums[j]);
    }
}
vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums , ans , index);
    return ans;
}
int main()
{
    vector<int> nums;
    int n;

    cout << "Enter the size : ";
    cin >> n;

    cout << "Enter the elements : ";
    for(int i=0 ; i<n ; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    vector<vector<int>> answer = permute(nums);

    cout << "Permutations : " << endl;

    for(int i=0 ; i<answer.size() ; i++){
        for(int j=0 ; j<answer[0].size() ; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}