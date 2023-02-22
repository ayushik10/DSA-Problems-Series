// To implement STL - Deque.

#include <iostream>
#include <deque>

using namespace std;

int main ()
{
    deque <int> d;

    d.push_back(8);
    d.push_front(9);

    for ( int i:d ){
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();

    cout << "Print 1st index element -> " << d.at(1) << endl;

    cout << "Front element -> " << d.front() << endl;
    cout << "Back element -> " << d.back() << endl;

    cout <<"Empty or not -> " << d.empty() << endl;

    cout << "Before erase -> " << d.size() << endl;
    d.erase( d.begin() , d.begin()+1 );
    cout << "After erase -> " << d.size() << endl;

   for ( int i:d ){
        cout << i << " ";
    }
    cout << endl;


}