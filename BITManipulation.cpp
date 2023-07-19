// BitManipulation 
#include<iostream>
using namespace std;
int gatbit(int n, int poss){
    return ((n&(1<<poss)!=0));
}
int setbit(int n, int pos){
    return (n|(1<<pos));
}
int clearbit(int n, int pos){
    int mask=~(1<<pos);
    return (n & pos);
}
int main(){
    cout<<gatbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,1)<<endl;
    return 0;
}
