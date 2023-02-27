// To find the the row having the largest sum.

#include <bits/stdc++.h>
using namespace std;

int largestSum (int arr[][3] , int row , int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 3; col++){
            sum += arr[row][col];
            if (sum > maxi){
                maxi = sum;
                rowIndex = row;
            }
        }
    }
        cout << "Maximum Sum Is "  << maxi << endl; ;
        return rowIndex;
}
int main ()
{
    int arr[3][3];

    cout << "Enter the elements : ";

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }
    
    cout << "Printing Array " << endl;

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int ans = largestSum (arr , 3 ,3);
    cout << "The Largest Row Is " << ans << endl;
    return 0;
}