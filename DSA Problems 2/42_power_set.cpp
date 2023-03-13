#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> arr , vector<vector<int>>& solution , vector<int> output , int index)
{
    if(index == arr.size()){
        solution.push_back(output); //storing output of current branch
        return;
    }

    subsets(arr , solution , output , index+1);
    output.push_back(arr[index]);
    subsets(arr , solution , output , index+1);

}
vector<vector<int>> powerSet(vector<int> arr)
{
    vector<vector<int>> solution;
    vector<int> output;
    int index = 0;

    subsets(arr , solution , output , index);
    return solution;

}
int main()
{
    vector<int> arr;
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for(int i=0 ; i<n ; i++){
        int temp ;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Power sets = " ;
    
    return 0;
}