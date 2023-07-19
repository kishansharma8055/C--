#include <iostream>
using namespace std;
int main(int a, char *b[])
{
    cout << "a";
    cout << "you enter cla " << a << endl;
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << endl;
    }
    cout << endl;
    return 0;
}