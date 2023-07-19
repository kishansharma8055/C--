#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void input(){
        cout<<"enter two number ";
        cin>>a>>b;
    }
    friend void add(A ob);
};
void add (A ob){
    int c;
    c=ob.a+ob.b;
    cout<<"sum "<<c<<endl;
}
int main(){
    A k;
    k.input();
    add (k);
    return 0;
}
// 
// 
// 
// 
// 
// this program without friend function
// #include<iostream>
// using namespace std;

// class A {
//     int a,b;
//     public:
//     void input(){
//         cout<<"hello input"<<endl;
//         cout<<"enter two num ";
//         cin>>a>>b;
//     }
//     void add ();
// };
// void add(){
//         cout<<"hello input"<<endl;
//     int c,x,y;
//     c=x+y;
//     cout<<"sum "<<c<<endl;
// }

// int main(){
//     A k;
//     k.input();
//     add();
//     return 0;
// }