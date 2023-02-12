// To find the complement of base 10 integer.

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  int n , ans = 0;

  cout <<"Enter a base 10 integer : ";
  cin >> n;
 
n = (~n);

int i = 0 ;
while ( n != -1 ){
  int bit = n & 1;
  ans = ans + (bit* ( pow( 2, i)));
  n= n >> 1;
  i++;
}
 

 cout << "Complement of the entered base 10 integer is : "<< ans ;
 
 return 0;
}