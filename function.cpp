// function syntex
// data_type function-name(parameter, parameter,....){  // body
// }
#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>
bool prime(int n);
// void fib(int n);
// int fact(int n);
// int fact(int n);
// int fact(int n);


int main()
{
    // prime number
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
        cout<<i<<endl;
        }
    }



    // Fibenacci sequence
    // int n;
    // cin >> n;
    // fib(n);
    // return 0;



    // factorial number
    // int n;
    // cin>>n;
    // int ans=fact(n);
    // cout<<ans<<endl;
    // return 0;




    // factorial nCr
    // int n,r;
    // cin>>n>>r;
    // int ans=fact(n)/(fact(r)*fact(n-r));
    // cout<<ans<<endl;
    // return 0;




    // pascal trangle
    // int n;
    // cin>>n;
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
}

bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
      if(n%2==0){
        return false;
      }
    }
     return true;
}



// Fibenacci sequence
// void fib(int n)
// {
//     int t1 = 0, t2 = 1, nt;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << t1 << endl;
//         nt = t1 + t2;
//         t1 = t2;
//         t2 = nt;
//     }
//     return ;
// }




// factorial number
// int fact(int n){
//        int factorial=1;
//        for(int i=2;i<=n;i++){
//         factorial*=i;
//        }
//        return factorial;
// }





// factorial nCr
// int fact(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }




// // pascal trangle
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
//     }
//     return factorial;
// }