// To rotate a matrix by 90 degree.

#include <iostream>
#include <vector>
using namespace std;

void rotateImage (vector<vector<int>>& arr)
{
    int row = arr.size();
    int col = arr[0].size();

   vector< vector <int>> ans(arr);

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
        ans[j][col-1-i]=arr[i][j];
        }
    }
    arr = ans;
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
    
    cout << "Rotated Image : " <<endl;
    rotateImage(arr);
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}