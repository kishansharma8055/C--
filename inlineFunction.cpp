// simple inline function
#include<iostream>
using namespace std;
int fun (int a, int b){
    return (a>b)?a:b;
}
int main(){
    int a, b;
    cout<<"enter two num ";
    cin>>a>>b;
    cout<<fun(a, b)<<endl;
    return 0;
}