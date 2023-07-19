// #include<iostream>
// using namespace std;
// int sum(int n);
// int main(){
// // sum of n number
//     int n,ans=0;
//     cin>>n;
//     ans=sum(n);
//     cout<<ans<<endl;
//     return 0;
// }
// int sum(int n){
//     int ans=0;
//     for(int i=0;i<=n;i++){
//         ans+=i;
//     }
//     return ans;
// }





// pythagorean triplet
// #include<iostream>
// using namespace std;
// int check(int x,int y,int z);
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;
//     if(check(x,y,z)){
//         cout<<"pythagorean triplet";
//     }
//     else{
//         cout<<"this is not a pythagorean triplet";
//     }
// }
// int check(int x, int y, int z){
//     int a=max(x, max(y,z));
//     int b,c;
//     if(a==x){
//         b=y;
//         c=z;
//     }
//     else if(a==y){
//         b=x;
//         c=z;
//     }
//     else{
//         b=x;
//         c=y;
//     }
//     if((a*a==b*b+c*c)){
//         return 1;
//     }
//     else
//     return 0;
// }






// binary to decimal
// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int btd(int n);
// int otd(int n);
// int hdtd(string n);
// int dtb(int n);
// int main()
// {
    // string n; // hexadecimal ka liya int ko string bnaya
    // int n;
    // cin >> n;
    // cout<<btd(n)<<endl;
    // cout<<otd(n)<<endl;
    // cout << hdtd(n) << endl;
    // cout << dtb(n) << endl;
    // return 0;
// }





// int btd(int n){
//     int ans=0;
//     int x=1;
//     while (n>0)
//     {
//         int y=n%10;
//         ans+=x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }





// int otd(int n){
//     int ans=0;
//     int x=1;
//     while (n>0)
//     {
//         int y=n%10;
//         ans+=x*y;
//         x*=8;
//         n/=10;
//     }
//     return ans;
// }



// int hdtd(string n)
// {
//     int ans = 0;
//     int x = 1;
//     int s = n.size();
//     for (int i = s - 1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             ans += x * (n[i] - '0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             ans += x * (n[i] - 'A' + 10);
//         }
//         x += 16;
//     }
//     return ans;
// }


