// To check whether a given string is palindrome or not.

#include <iostream>
using namespace std;


bool checkPalindrome (char ch[] , int n)
{
    int s = 0;
    int e = n-1;

    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false ;
//             break;
           }
         else {
              s++ ;
            e --;
            }
    }
    return true ;
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
   char ch[100] , n;

   cout << "Enter a name : ";
   cin >> ch;
  
   n = getLength(ch);

   if(checkPalindrome (ch , n)){
    cout << "Palindrome" << endl;
   }
   else{
    cout << "Not Palindrome" << endl;
   }
    
   return 0;
}
