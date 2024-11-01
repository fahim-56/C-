#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];

    // cin>>str;
    // cout<<str<<endl;

    // getchar();
    // fgets(str, n, stdin);
    // cout << str << endl;

    getchar();
    cin.getline(str, n);
    cout << str << endl;

    return 0;
}