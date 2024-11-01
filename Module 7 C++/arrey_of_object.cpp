#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int id;
};
int main()
{
    int n;
    cin >> n;
    // Student arr[n];
    Student * arr=new Student[n];

    // 2
    // Fahim 22 127
    // Tonmoy 23 128

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i].name >> arr[i].age >> arr[i].id;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].name << " " << arr[i].age << " " << arr[i].id << endl;
    // }

    // 2
    // Fahim Chowdhury
    // 22 127
    // Tonmoy Kowashik
    // 23
    // 128

    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].id;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].id << endl;
    }


    return 0;
}