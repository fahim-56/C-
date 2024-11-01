#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int id;
    int marks;
};
int main()
{
    // Fahim 3 90
    // Tonmoy 5 90
    // Kawshik 4 90
    // Muhammad 1 100
    // Saleh 2 99
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].id >> arr[i].marks;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            // if (arr[i].id > arr[j].id)
            // if (arr[i].id < arr[j].id)
            // if (arr[i].marks > arr[j].marks)
            if (arr[i].marks < arr[j].marks)
            {
                swap(arr[i], arr[j]);
            }
            else if (arr[i].marks == arr[j].marks)
            {
                if (arr[i].id > arr[j].id)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].id << " " << arr[i].marks << endl;
    }

    return 0;
}