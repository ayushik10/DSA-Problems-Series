// Introduction to pointers.

#include <iostream>
using namespace std;

int main ()
{
    int num = 5;

    cout << num << endl;
    
    // address of operator --> &

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    double d = 3.2;
    double *dt = &d;

    cout << "Address is : " << dt << endl;
    cout << "Value is : " << *dt << endl;

    // to check size of integer and pointer

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;
    cout << "Size of pointer is " << sizeof(dt) << endl;

    return 0;
    
}