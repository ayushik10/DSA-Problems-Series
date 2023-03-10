// To count ways to reach nth stairs.

#include<iostream>
using namespace std;

int countWays(int stairs)
{
    //base case
    if(stairs == 0)
    return 0;

    if(stairs == 1)
    return 1;

    //recursive call
    return countWays(stairs-1) + countWays(stairs-2);
}
int main()
{
    int stairs;
    cout << "Enter the number of stairs : " ;
    cin >> stairs;

    cout << "Total ways to reach nth stairs is " << countWays(stairs) << endl;

    return 0;

}