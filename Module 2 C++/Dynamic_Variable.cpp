#include <bits/stdc++.h>
using namespace std;
// Dynamic Variable in Function
int *Function()
{
    int *n;
    n = new int;
    int a = 10;
    *n = a;
    cout << endl
         << "n mean " << n << " &n mean " << &n << " *n mean " << *n << endl;
    cout
        << "a mean " << a << " &a mean " << &a << endl;
    cout
        << "The Function Returned " << endl;
    return n;
}
int main()
{
    // int *a = new int;
    // *a = 10;
    // cout << "Address " << a << " " << &a << " Value = " << *a << endl;

    // Usal memory alocation
    // int n = 10;
    // int *p = &n;
    // cout << "Address of n = " << &n << " Value of n = " << n << endl;
    // cout << "P mean = " << p << " &p mean = " << &p << " *p mean " << *p << endl;

    // Dynamic Memory Alocation
    // int *a = new int;
    // *a = 10;
    // cout << endl
    //      << "a mean " << a << " &a mean " << &a << " *a mean " << *a << endl;
    int *x = Function();
    cout << x << " = " << *x << endl;

    return 0;
}