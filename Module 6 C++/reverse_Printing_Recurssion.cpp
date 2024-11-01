#include <bits/stdc++.h>
using namespace std;

void rev_print(stringstream &a)
{

    string x;
    if (a >> x)
    {
        rev_print(a);
        cout << x << endl;
    }
}
int main()
{
    string f = "I am Fahim Chowdhury";
    stringstream ff;
    ff << f;
    rev_print(ff);

    return 0;
}