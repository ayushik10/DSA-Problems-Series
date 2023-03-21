// To find all the duplicate elements in an array.

#include<algorithm>
#include<iostream>
using namespace std;

void duplicates ( int arr[] , int n )
{
   sort(arr,arr+n);

    for( int i = 0; i < n-1;i++)
    {
       int temp = arr[i];
        if ( arr[i]==arr[i+1] )
        {
           while(arr[i]==arr[i+1])
           {
            i++;
            }
            cout << arr[i] <<" ";
            while(i<n-1 && arr[i+1]==temp) {
               i++;
            }
        }
       
    }
 }
 int main()
{
    int arr[100], n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : " <<endl;
    for (int i = 0; i <n; i++){
        cin >> arr[i];
    }
    cout<<"All the duplicates in the given array : " ;
    duplicates(arr, n);
    
       return 0;
}
