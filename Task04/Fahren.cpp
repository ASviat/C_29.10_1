#include <iostream>
using namespace std;
int main()
{
    int ftemp;
    cout << "Enter temperature in Fahren: ";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Temperature in Celcias is " << ctemp << '\n';

    return 0;
}