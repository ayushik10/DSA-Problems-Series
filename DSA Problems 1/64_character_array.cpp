// To introduce character array.

#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;

    for (int i=0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}
int main ()
{
    char name[20];

    cout << "Enter your name : ";
    cin >> name;

   //  name[2] = '\0';
   
    cout << "Name : " << name << endl;

    int len = getLength(name);
    cout << "Length : " << len << endl;

    cout << "Character in lower case :  " << toLowerCase('F') << endl;

    return 0;
}