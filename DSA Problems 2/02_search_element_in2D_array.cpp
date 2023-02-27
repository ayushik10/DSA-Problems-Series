// To search an element in a 2D array.

#include <iostream>
using namespace std;

bool isPresent (int arr[][4], int element , int row , int col)
{
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4 ; col++){
            if (arr[row][col] == element){
                return 1;
            }
        }
    }
    return 0;
}

int main ()
{
    int arr[3][4] , n ;

    cout << "Enter the elements : ";

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }
    
    cout << "Printing Array " << endl;

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
       cout << "Enter the element to search for : " ;
       cin >> n;

        if ( isPresent (arr , n,  3 , 4)){
            cout << "The element is present !" << endl;
        }
        else 
        cout << "Element not found !" << endl;
    
    return 0;
}