// To find the length of string without using any in-built function.

#include <iostream>
#include <string>
using namespace std;

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

   cout << "Length of the given string is " << getLength (name) << endl;
   return 0;
}