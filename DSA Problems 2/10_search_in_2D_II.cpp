// To search an element in a 2D array (II).

#include <iostream>
#include <vector>
using namespace std;

 bool searchMatrix(vector<vector<int>> matrix, int target)
 {
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while (rowIndex < row && colIndex >= 0){
        int element = matrix [rowIndex][colIndex];
     
       if (element == target){
        return 1;
       }
       else if (element < target){
        rowIndex++;
       }
       else
       colIndex--;
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
