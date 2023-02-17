// To find the sum of two arrays.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> reverse (vector<int> v)
{
    int s = 0;
    int e = v.size()-1;

    while (s < e){
        swap (v[s++] , v[e--]);
    }
    return v;
}

vector<int> sumOfArray ( vector<int> arr , vector<int> brr )
{
    vector<int> sum;
    int i = arr.size()-1;
    int j = brr.size()-1;
    int carry = 0;

    while (i >= 0 && j >= 0){
        int ans = arr[i] + brr[j] + carry;
        sum.push_back (ans % 10);
        carry = ans / 10;
        i--;
        j--;
    }
    while (i >= 0){
        int ans = arr[i] + carry;
        sum.push_back (ans % 10);
        carry = ans / 10;
        i--;
    }
    while (j >= 0){
        int ans = arr[j] + carry;
        sum.push_back (ans % 10);
        carry = ans / 10;
        j--;
    }
   if (carry)
   sum.push_back(carry);

   return reverse(sum);
}

int main ()
{
    
    int n , m;
    vector<int> arr;
    vector<int> brr;

    cout << " Enter the size of the two arrays : ";
    cin >> n >> m;

    cout << " Enter the elements of the first array : ";
    for ( int i = 0; i < n; i++)
    {
      int temp ;
      cin >> temp;
      arr.push_back(temp);
    }
    

    cout << " Enter the elements of the second array : ";
    for ( int i = 0; i < m; i++ )
    {
      int temp ;
      cin >> temp;
      brr.push_back(temp);
    }
    
   vector<int> ans = sumOfArray (arr , brr);

    cout << "Sum of two arrays : " ; 
    return 0;
}