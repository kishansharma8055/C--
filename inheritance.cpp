// // single
// #include <iostream>
// using namespace std;

// class a
// {
// public:
//     void fun()
//     {
//         cout << "inherited"<<endl;
//     }
// };
// class b : public a
// {

// };

// int main()
// {
//     b k;
//     k.fun();
//     return 0;
// }
//
//
//
//
// multiple inheritance
// #include <iostream>
// using namespace std;
// class a
// {
// protected:
//     int x;

// public:
//     a()
//     {
//         x = 2;
//     }
// };
// class b
// {
// protected:
//     int y;

// public:
//     b()
//     {
//         y = 5;
//     }
// };
// class c : public a, public b
// {
//     int z;

// public:
//     void mul()
//     {
//         z = x + y;
//         cout << z << endl;
//     }
// };
// int main()
// {
//     c k;
//     void mul();
//     return 0;
// }
//
//
//
//
//
#include <iostream>
using namespace std;
class base1
{
private:
    int a, b, c;

public:
    void input1()
    {
        cout << "enter two num ";
        cin >> a >> b;
    }
    void show1()
    {
        c = a + b;
        cout << "base1 sum is " << c << endl;
    }
};
class base2
{
private:
    int a, b, c;

public:
    void input2()
    {
        cout << "enter two num ";
        cin >> a >> b;
    }
    void show2()
    {
        c = a - b;
        cout << "base2 sub is " << c << endl;
    }
};
class base3 : public base1, public base2
{
private:
    int a, b, c;

public:
    void input3()
    {
        cout << "enter two num ";
        cin >> a >> b;
    }
    void show3()
    {
        c = a * b;
        cout << "base3 mul is " << c << endl;
    }
};
int main()
{
    // base1 ob1;
    // ob1.input1();
    // ob1.show1();

    // base2 ob2;
    // ob2.input2();
    // ob2.show2();

    base3 ob3;

    ob3.input1();
    ob3.show1();

    ob3.input2();
    ob3.show2();

    ob3.input3();
    ob3.show3();

    return 0;
}