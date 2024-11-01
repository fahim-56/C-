#include <bits/stdc++.h>
using namespace std;
int main()
{
    string f;
    f = "Fahim";
    // for(int i=0;i<f.size();i++)
    // {
    //     cout<<f[i]<<endl;
    // }

    // cout << *f.begin() << endl;
    // cout << *(f.end()-1) << endl;

    // string::iterator it;
    // for (it = f.begin(); it < f.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for (string::iterator it = f.begin(); it < f.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (auto it = f.begin(); it < f.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}