#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m1;
    cout << "map is empty " << m1.empty() << endl;
    m1["kishan"] = 99;
    m1["deepak"] = 98;
    m1["ram"] = 92;

    m1.insert({{"khan", 15}, {"rohan", 56}});

    map<string, int>::iterator itr;
    for (itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }

    cout << "the size is " << m1.size() << endl;
    cout << "the max_size is " << m1.max_size() << endl;
    cout << "map is empty " << m1.empty() << endl;

    return 0;
}