// Input = 412       Output = four one two

#include<iostream>
using namespace std;

void sayDigit(string str[] , int num)
{
    //base case
    if(num == 0)
    return;
   
    //process
    int digit = num%10;
    num = num/10;
    
    //recursive call
    sayDigit(str , num);

    cout << str[digit] << " " ;
}
int main ()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    string str[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    sayDigit(str , num);

    return 0;
}