// To rotate an array.

#include <iostream>
#include <vector>
using namespace std;

void showArray ( vector<int>arr , int n )
{
    for ( int i = 0; i < n; i++ )
    cout << arr[i] << " "; 
}
void rotateArray ( vector<int>& arr , int k)
{
   int n = arr.size();
   vector<int> temp(n) ;
   
   for ( int i = 0; i < n; i++ )
   {
     temp[ (i+k) % n ] = arr[i];
   }
    arr = temp;
}

int main ()
{
    vector <int> arr ;
    int n, k;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the position to rotate the array : ";
    cin >> k;

    cout << "Enter the elements of the array : ";
    for ( int i = 0; i < n; i++ )
    {
    int temp ;
    cin >> temp;
    arr.push_back(temp);
    }

    cout << "Rotated array : " ;
    rotateArray ( arr, k );
    showArray ( arr , n );

    return 0;

}