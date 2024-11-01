#include <bits/stdc++.h>
using namespace std;
int main()
{
    string f, c;
    f = "Fahim ";
    c = "Chowdhury";
    cout << (f + c) << endl;
    f.append(c);
    cout << f << endl;

    // f += "Chowdhury";
    // cout << f << endl;
    // cout << (f += "Chowdhury") << endl;

    // f.push_back('1');
    // cout << f << endl;

    // f.pop_back();
    // cout << f << endl;

    f = "Kawshik";
    f.assign("Kawshik");
    cout << f << endl;
    
    return 0;
}