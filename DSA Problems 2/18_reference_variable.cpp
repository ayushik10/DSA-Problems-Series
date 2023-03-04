#include <iostream>
using namespace std;

int& func(int a)
{
   int num = a;
   int& ans = num;
   return ans;
}
int* fun(int n)
{
    int* ptr = &n;
    return ptr;
}
void update1(int& n)
{
   n++;
}
void update2(int n)
{
   n++;
}
int main()
{
    int i = 5;

    // Create a reference variable
    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 10;

    cout << "Before : " << n << endl;
    update1(n);
    //update2(n);
    cout << "After : " << n << endl;
   
   cout << func(n) << endl;
   cout << fun(n) << endl;

    return 0;
}