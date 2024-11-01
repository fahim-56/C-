#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    swap(a, d);
    swap(b, c);
    cout << a << " " << b << " " << c << " " << d << endl;

    cout << min({a, b, c, d}) << endl;
    cout << max({a, b, c, d}) << endl;
    
    return 0;
}