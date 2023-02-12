#include<iostream>
using namespace std;

int main()
{
    int amount;
    int notes_100,notes_50,notes_20,notes_1;

     cout<<" Enter the amount : ";
     cin>>amount;

     switch(amount>=100)
     {
        case 1:
        notes_100 = amount/100;
        amount=amount%100;
     }
        switch(amount >=50)
        {
            case 1:
            notes_50 = amount/50;
            amount =amount %50;
        }
            
            switch(amount>=20)
            {
                case 1:
                notes_20 = amount/20;
                amount=amount%20;
            }
                switch(amount>=1)
                {
                    case1:
                    notes_1 = amount;
                }

     cout<<" Rs. 100 notes = "<<notes_100<<endl;
     cout<<" Rs. 50 notes = "<<notes_50<<endl;
     cout<<" Rs. 20 notes = "<<notes_20<<endl;
     cout<<" Rs. 1 notes = "<<notes_1<<endl;

    return 0;
}