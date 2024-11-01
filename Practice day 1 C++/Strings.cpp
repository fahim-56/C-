#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int len = a.size(), lenb = b.size();
    string c = a + b;
    swap(a[0], b[0]);
    cout << len << " " << lenb << endl
         << c <<endl<< a << " " << b <<
        endl;
    return 0;
}