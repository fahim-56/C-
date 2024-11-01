#include <iostream>
using namespace std;
int main()
{
    // int n;
    // for (int i = 0; cin >> n; i++)
    // {
    //     if (n == 5)
    //     {
    //         cout << "Fund it" << endl;
    //         break;
    //     }
    //     else
    //         cout << "Not Found " << endl;
    // }

    string n;
    while (cin >> n)
    {
        if (n == "password")
        {
            cout << "Password Matched" << endl;
            break;
        }
        else
            cout << "Wrong Entry " << endl;
    }
    return 0;
}