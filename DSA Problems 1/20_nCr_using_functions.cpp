#include<iostream>
using namespace std;

int factorial ( int n )
{
   int factorial = 1;
   for ( int i = 1 ; i <= n ; i++ ){
    factorial = factorial * i;
   }  
   return factorial ;
}

int nCr(int n,int r)
{
    int  c= (factorial (n)) / ((factorial (r)) * (factorial( n-r)));
    return c ;
}

int main ()
{
    int n , r ;
    cout << " Enter the value of n : ";
    cin >> n ;
    cout << " Enter the value of r :  ";
    cin>> r ;

    cout << " nCr  = " << nCr ( n, r );
    return 0;

}