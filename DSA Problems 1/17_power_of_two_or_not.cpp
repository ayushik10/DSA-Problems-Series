#include<iostream>
#include<math.h>
using namespace std;

int  main()
{
    int n;
    cout <<"Enter a number : ";
    cin >>n;

 for ( int i = 1 ; i <= 31 ; i ++){
    int power = pow ( 2 , i);

    if (  power == n){
        cout <<"The number is a power of 2 "<<endl;
    }
  } 
        cout << "The number is not a power of 2 "<< endl;
        return 0;
}
