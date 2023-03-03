#include <iostream>
using namespace std;

bool check(int arr[] , int n ,  int mid , int k)
{
    
     int boardsum = 0;
     int count = 1;

    for (int i=0 ; i<n ; i++){
        if (arr[i] > mid)
        return false;

        if (boardsum + arr[i] <= mid){
            boardsum += arr[i];
        }
        else{
            count ++;
            boardsum = arr[i];
        }
    }
    if (count>k)
    return false;
    
    else
    return true;
}

int findLargestMinDistance(int arr[] , int n , int k)
{
    int s = 0;
    int e = 0;
    int ans = -1;

    for (int i=0 ; i<n ; i++){
        e = e+arr[i];
    }
   
    while ( s<=e ){
         int mid = (s+e)/2;

        if (check(arr , n , mid , k)){
            ans = mid;
            e = mid-1;
        }
        else
        s = mid+1;
    }
    return ans;
}

int main()
{
    int arr[100] , size , k;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i=0 ; i<size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the total no of painter : ";
    cin >> k;

    cout << "Painters partition : " << findLargestMinDistance (arr , size , k) << endl;

    return 0;
    
}