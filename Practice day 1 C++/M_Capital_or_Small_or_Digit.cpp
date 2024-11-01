#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (x >= 'a' && x <= 'z')
            cout << "IS SMALL" << endl;
        else
            cout << "IS CAPITAL" << endl;
    }
    return 0;
}