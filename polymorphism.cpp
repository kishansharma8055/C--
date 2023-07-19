// 1.2
// #include<iostream>
// using namespace std;
// class demo{
//     private:
//     int number;
//     public:
//     void setnumber(int num){
//         number=num;
//     }
//     int getnumber(){
//         return number;
//     }
//     demo operator+(demo d){
//         demo res;
//         res.number=number+d.number;
//         return res;
//     }
// };
// int main(){
//     demo d1;
//     d1.setnumber(10);
//     demo d2;
//     d2.setnumber(20);
//     demo d3= d1 + d2;

//     demo d3 = d1.operator+(d2);

//     cout<<"addition of two object "<<d3.getnumber()<<endl;
//     return 0;
// }
//
//
//
//
//
//
// 2.1
// #include <iostream>
// using namespace std;
// class shape
// {
// protected:
//     int length;

// public:
//     shape(int l)
//     {
//         length = l;
//     }
//     int calculateArea()
//     {
//         return 4 * length;
//     }
// };
// class ractangule : public shape
// {
// private:
//     int breadth;

// public:
//     ractangule(int l, int b) : shape(l)
//     {
//         breadth = b;
//     }
//     int calculateArea(){
//         return length*breadth;
//     }
// };
// class trangle : public shape
// {
// private:
//     int breadth,height;

// public:
//     trangle(int l, int b, int w) : shape(l)
//     {
//         height=w;
//         breadth = b;
//     }
//     int calculateArea(){
//         return height*length*breadth;
//     }
// };
// int main(){
//     shape shape(10);
//     ractangule rect(10, 20);
//     trangle tra(10, 20, 30);

//     cout<<"area of square "<<shape.calculateArea()<<endl;
//     cout<<"area of ractangule "<<rect.calculateArea()<<endl;
//     cout<<"area of trangle "<<tra.calculateArea()<<endl;
//     return 0;
// }
// 
// 
// 
// 
// 
// 
// 2.2
#include <iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"print in base"<<endl;
    }
    void show(){
        cout<<"show in base"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"print in derived"<<endl;
    }
    void show(){
        cout<<"show in derived"<<endl;
    }
};

int main(){
    derived d;

    // run time polymorphism
    base* b;
    b=&d;
    b->print();
    b->show();

    d.print();
    d.show();
    return 0;
}