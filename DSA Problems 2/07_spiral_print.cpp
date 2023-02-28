// To print a spiral matrix.

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> arr)
{
    vector<int> ans;

    int row = arr.size();
    int col = arr[0].size();

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col-1;

    int count = 0;
    int total = row*col;

    while (count < total)
    {
        //printing starting row
        for (int i = startingCol; count < total && i <= endingCol; i++){
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
        //printing ending column
        for (int i = startingRow ; count < total && i <= endingRow; i++){
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;
        //printing ending row
        for (int i = endingCol; count < total && i >= startingCol; i--){
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;
        //printing starting column
        for (int i = endingRow; count <total && i >= startingRow; i--){
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main ()
{
    int row , col;
    vector<vector<int>> arr ;

    cout << "Enter the number of rows and columns : ";
    cin >> row >> col;

    cout << "Enter the elements : ";
    for (int i = 0; i < row; i++){
        vector <int> temp;
        for (int j = 0 ; j < col; j++){
            int t;
            cin >> t;
            temp.push_back(t);
        }
        arr.push_back(temp);
    }
   vector<int>answer = spiralOrder( arr);
    cout << "Spriral Print : " ;

   for (int i : answer){
            cout << i << " ";
   }
    return 0;
}