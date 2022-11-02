#include <iostream>
using namespace std;
int main()
{
    char name1 = 'A ';
    char name2 = '\t ';
    cout << name1;
    cout << name2;
    name1 = 'B';

    cout << name1;
    cout << '\n';

    cout << "\"So thats it\", she said.\x05";

    return 0;

}