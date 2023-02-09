// To display the counting from 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter a number :";
    cin>>n; 
    
    cout<<"Counting from 1 to "<<n<<" :"<<endl;
    for(int i=1;i<=n;i++)
    {
    
        cout<<i<<endl;
    } 
    cout<<endl;
    return 0;
}

/* class Solution {
public:
int firstOcc( vector<int>& nums , int target ) 
  {
    int left = 0;
    int right = nums.size() - 1;
    int mid = left + (right - left) /2;
    int ans = -1;

     while ( left <= right ){
        int mid = left + right / 2;

        if ( target == nums[mid] ){
             ans = mid ;
             right = mid - 1;
        }
            else if ( target < nums[mid] ){
                right = mid - 1;
            }
            else {
            left = mid + 1;
            }
            mid = left + (right - left) /2;
     }
       return ans;
}
    int lastOcc ( vector<int>& nums , int target)
{
    int left = 0 ;
    int right = nums.size() - 1;
    int mid  = left + ( right-left )/2;
    int ans = -1 ;

    while ( left <= right ){

        if ( target == nums[mid] ){
            ans = mid;
            left = mid + 1; 
            }
            else if ( target < nums[mid] ){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
            mid = left + ( right-left )/2;
    }
    return ans;
 } 
    vector<int> searchRange(vector<int>& nums, int target) {
      
      vector<int>p;
     int first= firstOcc( nums , target);
     int second = lastOcc ( nums , target);

     p.push_back(first);
     p.push_back(second);
      return p ;
       }
}; */
