#include <iostream>
using namespace std;
int main()
{
    float rad;
    const float PI = 3.14159F;
    cout << "Enter diameter: ";
    cin >> rad;
    float area = PI * rad * rad;
    cout << "Area gonna be: " << area << endl;

    return 0;
}