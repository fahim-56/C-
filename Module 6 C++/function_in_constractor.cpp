#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    int marks;
    int updated_marks;
    person(string name, int age, int marks, int updated_marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
        this->updated_marks = updated_marks;
    }
    void fun()
    {
        cout << "works in fun function" << endl;
    }
    void print()
    {
        cout << name << " " << age << " " << marks << " " << updated_marks << endl;
    }
    int updated_mark()
    {
        cout << name << " " << age << " ";
        return (marks + updated_marks);
    }
};
int main()
{
    person obj("Fahim Chowdhury", 22, 85, 10);
    cout << obj.name << " " << obj.age << " " << obj.marks << endl;
    obj.fun();
    obj.print();
    cout << obj.updated_mark() << endl;
    return 0;
}