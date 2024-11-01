#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 56;
    char ch[100] = "Indea";
    strcpy(dhoni->country, ch);

    Cricketer *kohli = new Cricketer;

    // kohli=dhoni;

    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country,dhoni->country);
    delete dhoni;

    cout << dhoni->jersey_no << " " << dhoni->country << endl;
    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}