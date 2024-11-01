#include <bits/stdc++.h>
using namespace std;
namespace Fahim
{
    int age = 22;
    void fun()
    {
        cout << "Printing from fahim" << endl;
    }
}
namespace Tonmoy
{
    void print()
    {
        cout << "Printing from Tonmoy" << endl;
    }
}
using namespace Tonmoy;
int main()
{
    cout << Fahim::age << endl;
    print();
    return 0;
}