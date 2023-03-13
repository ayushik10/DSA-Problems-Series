// To implement quick sort using recursion.

#include <iostream>
using namespace std;

int partition (int arr[] , int s , int e)
{
    int pivot = arr[s];
    int count = 0;

    for (int i=s+1 ; i<=e ; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // place pivot at right position

    int pivotIndex = s+count;
    swap (arr[pivotIndex] , arr[s]);

    //left and right part

    int i=s , j=e;

    while (i<pivotIndex && j>pivotIndex){
        while (arr[i] <= pivot){
            i++;
        }
        while (arr[i] > pivot){
            i--;
        }
        if (i<pivotIndex && j>pivotIndex){
            swap (arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort (int arr[] , int s , int e)
{
    //base case

    if (s >= e)
    return;

    //partition

   int p = partition (arr , s , e);

    //recursive call

    quickSort (arr , s , p-1); //sort left part
    quickSort (arr , p+1 , e); //sort right part

}
void printArray (int arr[] , int size)
{
    for (int i=0 ; i<size ; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[100], size;

    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements of the array : ";
    for (int i=0 ; i<size ; i++){
        cin >> arr[i];
    }

    cout << "Array Before sorting -->  " ;
    printArray(arr , size);
    
    quickSort(arr , 0 , size-1);

    cout << "Array after sorting --> ";
    printArray(arr , size);

    return 0;
}