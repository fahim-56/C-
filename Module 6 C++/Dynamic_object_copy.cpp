#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    int id;
    person(string name, int age, int id)
    {
        this->name = name;
        this->age = age;
        this->id = id;
    }
};
int main()
{
    person *obj1 = new person("Fahim ", 22, 127);
    person *obj2 = new person("Tonmoy", 21, 27);

    // obj1 = obj2;
    // delete obj2;
    // delete obj1;

    // obj1->name = obj2->name;
    // obj1->id = obj2->id;
    // obj1->age = obj2->age;
    // delete obj2;
    // delete obj1;

    *obj1=*obj2;
    delete obj2;
    // delete obj1;

    cout << obj1->name << " " << obj1->id << " " << obj1->age << endl;
    // cout << obj2->name << " " << obj2->id << " " << obj2->age << endl;

    return 0;
}
