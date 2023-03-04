#include <iostream>
using namespace std;

int main ()
{
   /* No - 1
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;  -->  first = 8  second = 9  */
    
    /* No - 2
    int first = 6 ;
    int *p = &first;
    int *q = p;
    (*q)++ ;
    cout << first << endl;  --> first = 7       */

   /* No - 3
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";  -->  8
    cout << first << endl;  -->  9          */

    // No - 4
    

    return 0;
}