#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    (n % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
    // if(n%2==0)
    // {
    //     cout<<"Even"<<endl;
    // }
    // else
    // {
    //     cout<<"Odd"<<endl;
    // }
    (n >= 0) ? cout << "Positive" << endl : cout << "Negetive" << endl;
    return 0;
}