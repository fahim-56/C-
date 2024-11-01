#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> x >> n;
    long long int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        double xx = pow((x * 1.00), (i * 1.00));
        sum += xx;
    }
    cout << (long long int)(sum) << endl;
    return 0;
}