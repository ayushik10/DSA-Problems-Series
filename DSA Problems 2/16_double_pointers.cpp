#include <iostream>
using namespace std;

void update (int **p2)
{
   //  p2 = p2 + 1;  --> no changes
   // *p2 = *p2 + 1; --> change occurs....value of p i.e the address stored in it increases  
   **p2 = **p2 + 1; //-->  change occurs....value of i increases by 1
}
void update (int *p)
{
    *p = (*p) * 2;
}

void increament (int **p)
{
    ++(**p);
}
int main ()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // prints the value at i
    cout << "--> " << i << endl;
    cout << "--> " << *p << endl;
    cout << "--> " << **p2 << endl;

    // prints the address of i
    cout << "--> " << &i << endl;
    cout << "--> " << p << endl;
    cout << "--> " << *p2 << endl;

    // prints the address of *p
    cout << "--> " << &p << endl;
    cout << "--> " << p2 << endl;

    cout << endl;

    cout << "Before -  " << i << endl; 
    cout << "Before -  " << p << endl;
    cout << "Before -  " << p2<< endl;
    update (p2);
    cout << endl;
    cout << "After -  " << i << endl;
    cout << "After -  " << p << endl;
    cout << "After -  " << p2 << endl;
    cout << endl;

    int num = 110 ;
    int *ptr = &num;
    increament (&ptr);
    cout << num << endl;

    return 0;

}