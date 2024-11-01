#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    int marks;
    person(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }
};
int main()
{
    person obj("Fahim Chowdhury", 22, 4076);
    cout << obj.name << " " << obj.age << " " << obj.marks << endl;

    return 0;
}