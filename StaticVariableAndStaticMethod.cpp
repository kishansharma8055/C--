#include <iostream>
using namespace std;
class A
{
    int a;
    static int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    static void display()
    {
        // static function me only static variable hi access ho sakthe ha
        cout << b << endl;
        // cout<<"a is not a static variable"<<a<<endl;
    }
};
// static variable bnate  ha to ya bhi important ha
// static data member ko zero se initilixed karna pdata ha
// data_type class_name scope_solution(::) variable = 0;
int A ::b = 0;
int main(){
    A ob(10,20), ob2 (100,200);
    ob.show();
    ob2.show();
    // access static function without object 
    A ::display();

    // ob.display();
    // ob2.display();
 
    // ob.show();


    return 0;
}