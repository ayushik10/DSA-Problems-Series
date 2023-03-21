#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
       char * name;
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

       Hero(int health , char level , char *name){
        this->health = health;
        this->level = level;
        this->name = name;
       }

       void print(){
        cout << "Name : " << this->name << ", Health : " << this->health << ", level : " << this->level << endl;
       }
};
int main()
{
    Hero h1(50, 'A');
    char temp[7] = "Ayushi";
    strcpy(h1.name, temp);
    cout << "h1 before update : ";
    h1.print();

    Hero h2(h1);
    cout << "h2 before update : ";
    h2.print();
    h1.name[0] = 'B';

    cout << "h1 after update : ";
    h1.print();
    cout << "h2 after update : ";
    h2.print();

    return 0;

}
