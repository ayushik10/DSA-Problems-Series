// To revers a string without using any inbuilt function.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverse (char name[] , int l)
{
    int  s = 0;
    int e = l - 1;

    while ( s < e)
    {
        swap (name[s++] , name[e--]);
    }
}

int getLength (char name[])
{
   int count = 0;
   for (int i = 0; name[i] != '\0'; i++)
   {
    count ++ ;
   }
   return count ;
}
int main ()
{
   char name[20];

   cout << "Enter a name : ";
   cin >> name;

   int l = getLength (name);

   cout << "Reversed String : " ;
   reverse (name , l);

   cout << name;
   
   return 0;
}