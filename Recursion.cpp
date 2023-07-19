// // sum of n number with recursion
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     int presum=sum(n-1);
//     return n+presum;
// }
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     cout<<sum(n)<<endl;
//     return 0;
// }
// 
// 
// 
// 
// find a power for any number with the
// help of recursion
// #include <iostream>
// using namespace std;
// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prepower = power(n, p - 1);
//     return n * prepower;
// }
// int main()
// {
//     int a, b;
//     cout << "enter a num and power " ;
//     cin >> a >> b;
//     cout << power(a, b) << endl;
//     return 0;
// }
// 
// 
// 

// factorial
// #include<iostream>
// using namespace std;
// // int fac(int n);
// int fac(int n){
//     if(n=0){
//         return 1;
//     }
//     int pre=fac(n-1);
//     return n*pre;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fac(n)<<endl;
//     return 0;
// }
// int fac(int n){
//     if(n=0){
//         return 1;
//     }
//     int pre=fac(n-1);
//     return n*pre;
// }
// 
// 
// 
// 
// fabonacci number
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n == 0  ||  n == 1)
//     {
//         return n;
//     }

//     return fib(n - 1) + fib(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fib(n)<<endl;
//     return 0;
// }
// 
// 
// 
// yaha program galta ha
// sorted array
// #include<iostream>
// using namespace std;
// bool sorted(int array[], int n){
//     if(n=1){
//         return true;
//     }
//     bool prearray=sorted(array+1 , n-1);
//     return (array[0]<array[1] && prearray);
// }
// int main(){
//     int array[]={1,2,6,4,5};
//     cout<<sorted(array, 5)<<endl;
//     return 0;
// }
// 
// 
// 
// print number till n in increase and decrease order
// #include<iostream>
// using namespace std;
// int inc(int n){
//     if(n=0){
//         return 0;
//     }
//     cout<<n<<endl;
//     inc(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<inc(n)<<endl;
//     return 0;
// }