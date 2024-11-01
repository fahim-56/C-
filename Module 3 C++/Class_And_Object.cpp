#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int Id;
    float cgpa;
};

int main()
{

    Student std, std0;

    // char ch[100] = "Fahim";
    // strcpy(std.name, ch);
    // std.Id = 127;
    // std.cgpa = 3.75;

    // cin >> std.name;
    // cin >> std.Id;
    // cin >> std.cgpa;
    // cin >> std.name >> std.Id >> std.cgpa;
    // cout << "Name : " << std.name << "\nID : " << std.Id << "\nCgpa : " << std.cgpa << endl;

    // cin >> std0.name >> std0.Id >> std0.cgpa;
    // cout << "Name : " << std0.name << "\nID : " << std0.Id << "\nCgpa : " << std0.cgpa << endl;

    // cin.getline(std.name,100);
    // cin >> std.Id;
    // cin >> std.cgpa;
    // cout << "Name : " << std.name << "\nID : " << std.Id << "\nCgpa : " << std.cgpa << endl;

    cin >> std0.Id;
    getchar();
    cin.getline(std0.name, 100);
    cin >> std0.cgpa;
    cout << "Name : " << std0.name << "\nID : " << std0.Id << "\nCgpa : " << std0.cgpa << endl;

    return 0;
}