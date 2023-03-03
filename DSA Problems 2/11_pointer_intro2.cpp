// Pointers

#include <iostream>
using namespace std;

int main ()
{
   // int *p;   --> Bad practice 

   /*
   int i = 5;

   int *q = &i;

   cout << "Address : " << q << endl;
   cout << "Value : " << *q << endl; 

   int *p = 0;
   p = &i;

   cout << "address : " << p << endl;
   cout << "value : " << *p << endl;
     */

   int num = 10;
   int a = num ;
   cout << "a before " << num <<endl;
   a++;
   cout << "a after increament " << num << endl;
  
   int *p = &num;
   cout << "p before " << num <<endl;
   (*p)++;
   cout << "p after increament " << num << endl;

   // copying a pointer
   int *q = p;
   cout << p << " - " << q << endl;
   cout << *p << " - " << *q << endl;

   // important concept
   int b = 4;
   int *s = &b;
   //cout << (*s)++ << endl;

   *s = *s + 1;
   cout << *s << endl;
   cout << "before s " << s << endl;
   s = s + 1;
   cout << "after s " << s << endl;

   return 0;
   
}