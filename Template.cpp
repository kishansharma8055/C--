// class template
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class TamplateClass
{
    T a, b;

public:
    TamplateClass(T x, T y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " and " << b << endl;
    }
};

template <class T2>
void fun(T2 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    TamplateClass<int> obj1(10, 20);
    obj1.show();

    TamplateClass<float> obj2(1.2, 2.3);
    obj2.show();

    fun(5, 6);

    // float c, d;
    // cout << "enter two float num ";
    // cin >> c >> d;
    // sum(c, d);

    // char e, f;
    // cout << "enter two char num ";
    // cin >> e >> f;
    // sum(e, f);

    return 0;
}