#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    //properties
         string name;
         int health;
         char level;
};

int main()
{
    Hero h1;

    h1.name = "Ayushi Kumari";
    h1.health = 10;
    h1.level = 'A';

    cout << "Name = " << h1.name << endl;
    cout << "Health = " << h1.health << endl;
    cout << "Level = " << h1.level << endl;

    return 0;
}