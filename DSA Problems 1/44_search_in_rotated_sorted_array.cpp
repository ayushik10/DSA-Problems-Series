// To searchan element in a rotated sorted array.

#include <iostream>
using namespace std;

 int pivot ( vector<int>& nums )
    {
    int s = 0;
    int e = nums.size()-1;
    int mid = (s+e)/2;

    while ( s<e ){
    if ( nums[mid] >= nums[0] ){
        s = mid+1;
    }
    else 
    e = mid - 1;
    mid = (s+e)/2;
    }
    return s;
    }
 int searchElement(vector<int>& nums,int s, int e, int target) {

        while ( s <= e ){
        int mid = (s+e)/2;

        if ( nums[mid] == target){
        return mid ;
        }

        else if ( nums[mid] > target){
        e = mid -1;
        }

        else{
        s = mid +1;
        }
      }
    return -1;
    
  }
 int search(vector<int>& nums , int target){
    int piv = pivot(nums);
    int n = nums.size();

    if (target >= nums[0] && target < nums[piv]){
        return searchElement (nums , 0, piv-1, target);
    }
    else
    {
    return searchElement(nums ,piv, n-1 , target );
     }
}

int main ()
{
   vector<int> arr , size , key;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < size; i++ )
    {
     int temp;
     cin >> temp;
     arr.push_back(temp);
    }

    cout << "Enter the element to search for : ";
    cin >> key;
    
    cout << search ( arr , key);
    return 0;

