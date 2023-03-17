#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
       string name;
       int health;
       char level;

       Hero(){
       }

       Hero(int health){
        this->health = health;
       }
       
       Hero(int health , char level){
        this->health = health;
        this->level = level;
       }

       Hero(int health , char level , string name){
        this->health = health;
        this->level = level;
        this->name = name;
       }
};

int main()
{
    Hero *h1 = new Hero;

    cout << "For h1 --->  " << endl;
    cout << "  Health = " << h1->health << endl;
    cout << "  Level = " << h1->level << endl;
    cout << "  Name = " << h1->name << endl;
    cout << endl;

    Hero *h2 = new Hero(50);

    cout << "For h2 --->  " << endl;
    cout << "  Health = " << h2->health << endl;
    cout << "  Level = " << h2->level << endl;
    cout << "  Name = " << h2->name << endl;
    cout << endl;

    Hero *h3 = new Hero(30 , 'B');

    cout << "For h3 --->  " << endl;
    cout << "  Health = " << h3->health << endl;
    cout << "  Level = " << h3->level << endl;
    cout << "  Name = " << h3->name << endl;
    cout << endl;

    Hero *h4 = new Hero(100 , 'A' , "Ayushi");

    cout << "For h4 --->  " << endl;
    cout << "  Health = " << h4->health << endl;
    cout << "  Level = " << h4->level << endl;
    cout << "  Name = " << h4->name << endl;
    cout << endl;
    
    return 0;

}