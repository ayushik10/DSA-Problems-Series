// To check the number of unique occurances in an array.

#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool uniqueOccurance( int arr[] , int n )
{
    vector <int> occurance;

    sort ( arr , arr+n );

    for ( int i = 0; i < n;  ){
        int temp = arr[i];
        int count = 0;
    
    while ( i < n && arr[i] == temp ){
        count ++;
        i++;
    }
    occurance.push_back(count);
    }
    sort ( occurance.begin() , occurance.end() );

    for ( int i = 0; i < occurance.size()-1; i++ ){
        if ( occurance[i] == occurance[i+1])
        return false;
    }
    return true;

}

int main()
{
    int arr[100], n;

    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

   if ( uniqueOccurance( arr, n ) )
   {
    cout << "Unique Occurance exists !!";
   }
   else {
    cout << "Unique Occurance does not exists !!";
   }
    
    return 0;
}
