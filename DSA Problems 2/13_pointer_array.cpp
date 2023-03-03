#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {23 , 18 , 9 , 1 , 50};

    cout << "Address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is " << &arr[0] << endl;

    cout << "4th  " << *arr << endl;
    cout << "5th  " << *arr + 1 << endl;
    cout << "6th  " << *(arr + 1) << endl;
    cout << "7th  " << *(arr) + 1 << endl;
    cout << "8th  " << arr[2] << endl;
    cout << "9th  " << *(arr + 2) << endl;

    int i = 3;
    cout << "10th  " << i[arr] << endl;

    int temp[10] = {1, 2, 3};
    cout << "1st  " << sizeof(temp) << endl;
    cout << "2nd  " << sizeof(*temp) << endl;
    cout << "3rd  " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "1st  " << sizeof(ptr) << endl;
    cout << "2nd  " << sizeof(*ptr) << endl;
    cout << "3rd  " << sizeof(&ptr) << endl;

    int t[10] = {4, 5, 2, 7};
    cout << "---> " << &t[0] << endl;
    cout << "---> " << &t << endl;
    cout << "---> " << t << endl;

    int *p = &t[0];
    cout << "---> " << p << endl;
    cout << "---> " << *p << endl;
    cout << "---> " << &p << endl;

    int a[10];
   // a = a + 1;   --> Error

   int *str = &arr[0];
   cout << "- " << str << endl;
   str = str + 1;
   cout << "- " << str << endl;

    return 0;
}