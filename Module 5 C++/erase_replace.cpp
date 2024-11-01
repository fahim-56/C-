#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s = "Fahim Ashraf Chowdhury";

    // s.erase(6,7);   //(after which,how many)
    // cout << s << endl;

    // s.replace(6, 7, "kawshik ");
    // s.replace(6, 0, "kawshik ");
    s.insert(6, "kawshik ");
    cout << s << endl;

    return 0;
}