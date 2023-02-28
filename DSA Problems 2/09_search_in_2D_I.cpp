// To search in a 2D matrix.

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> arr , int target)
{
    int row = arr.size();
    int col = arr[0].size();

    int s = 0;
    int e = (row*col)-1;

    while (s <= e){
        int mid = (s+e)/2;

       int element = arr[mid/col][mid%col];

        if (element == target){
            return 1;
        }
        if (element< target){
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
         mid = (s+e)/2;
    }
    return 0;
}
int main ()
{
    int row , col , target;
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

    cout << "Enter the element to search for :  ";
    cin >> target;
   
    if (searchMatrix(arr , target)){
        cout << "Element found !";
    }
    else 
    {
        cout << "Element not found !";
    }
    return 0;
}