#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "It's One" << endl;
        break;
    case 2:
        cout << "It's two" << endl;
        break;
    case 3:
        cout << "It's Three" << endl;
        break;
    case 4:
        cout << "It's Four" << endl;
        break;

    default:
        cout << "5 or more" << endl;
    }
    return 0;
}