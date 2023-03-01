#include <iostream>
using namespace std;

bool check(int arr[] , int n , int mid , int key)
{
    int pages = 0;
    int stud = 1;

    for (int i = 0; i < n; i++){
        if (arr[i] > mid)
        return false;

        if(arr[i]+pages <= mid)
        {
            pages += arr[i];
        }
        else {
            stud++;
            pages = arr[i];
        }
    }
    if (key == stud)
    return true;

    else
    return false;
}

int getMin(int arr[] , int n)
{
    int i = 0;
    int min = arr[i];

   for (; i < n ; i++){

    if (arr[i] < min)
    min = arr[i];
   }
   return min;
}

int getSum(int arr[] , int n)
{

    int sum = 0;
   for (int i = 0; i < n; i++){
    sum = sum + arr[i];
   }
   return sum;
}

int allocateBooks (int arr[] , int size , int key)
{
    int s = getMin(arr , size);
    int e = getSum(arr , size);
    int ans = -1;

    while (s <= e){
        int mid = (s+e)/2;

        if (check(arr , size , mid , key))
        {
            ans = mid;
            e = mid-1;
        }
        else 
        {
            s= mid + 1;
        }
        mid = (s+e)/2;
    }

    return ans;

}

int main()
{
    int arr[100] , size , key;

    cout << "Enter the size of array : " ;
    cin >> size;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++)
    cin >> arr[i];

    cout << "Enter the total no students to allocate with books : ";
    cin >> key;

   int allocation =  allocateBooks (arr , size , key);
   cout << "Maximum of minimum alloted pages : " << allocation << endl;

   return 0;

}
