// To implement merge sort using recursion.

#include <iostream>
using namespace std;

void merge (int* arr , int s , int e)
{
    int mid = (s+e)/2;

    int length1 = mid-s+1;
    int length2 = e-mid;
    int* first = new int[length1];
    int* second = new int [length2];

    //copy values

    int mainArrayIdx = s;
    for (int i=0 ; i<length1 ; i++){
        first[i] = arr[mainArrayIdx++];
    }
    mainArrayIdx = mid+1;
    for (int i=0 ; i<length2 ; i++){
        second[i] = arr[mainArrayIdx++];
    }

    //merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;
    mainArrayIdx = s;

    while (index1 < length1 && index2 < length2){
        if (first[index1] < second[index2]){
            arr[mainArrayIdx++] = first[index1++];
        }
        else{
            arr[mainArrayIdx++] = second[index2++];
        }
    }

    while (index1 < length1){
        arr[mainArrayIdx++] = first[index1++];
    }

    while (index2 < length2){
        arr[mainArrayIdx++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort (int* arr , int s , int e)
{
    //base case
    if (s >=e ){
        return;
    }

    int mid = (s+e)/2;

    mergeSort (arr , s , mid); //sort left part
    mergeSort (arr , mid+1 , e); //sort right part

    merge (arr , s ,e); // merge
    
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
    
    mergeSort(arr , 0 , size-1);

    cout << "Array after sorting --> ";
    printArray(arr , size);

    return 0;
}