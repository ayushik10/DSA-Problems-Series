#include <iostream>
#include <algorithm>
using namespace std;

bool check(int arr[] , int n , int mid , int k)
{
   
   int count = 1;
   int pos = arr[0];
        
        
        for (int j=1 ; j<n ; j++)
        {
            if (arr[j] - pos >= mid){
                count++;
                pos = arr[j];
            }
         if(count == k)
         return true;   
        }

    return false;
}
int distance(int arr[] , int size , int k)
{
    sort(arr , arr+size);
    int s = 0;
    int e = 0;
    int ans = -1;

    for (int i=0 ; i<size ; i++){
        e = e+arr[i];
    }

    while (s<=e){
        int mid = (s+e)/2;

        if(check(arr , size , mid , k))
        {
            ans = mid;
            s = mid+1;
        }
        else
        e = mid-1;
    }
    return ans;
}
int main()
{
    int arr[100] , size , k;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for(int i=0 ; i<size ; i++)
    cin >> arr[i];

    cout << "Enter the total number of cows : ";
    cin >> k;

    int ans = distance(arr , size , k);

    cout << "Minimum of the maximum distance : " << ans << endl;

    return 0;
}