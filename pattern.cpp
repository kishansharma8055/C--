#include <iostream>
using namespace std;
int main()
{
    //   #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //   #endif




    // continue statement
    // int i;
    // for(i=0;i<=10;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<"\n";
    // }





    // break statement
    // prime num ha ya nahi = va number junma bhag ya to 1 ka or khud ka jata ha
    // int i,n;
    // cin>>n;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"non prime \n";
    //         break;
    //     }
    // }
    // if(i==n){
    // cout<<"prime"<<endl;
    // }





    // find prime number between two number
    // int a,b,i,num;
    // cin>>a>>b;
    // for(num=a;num<=b;num++){
    //     for(i=2;i<num;i++){
    //         if(num%2==0){
    //             break;
    //         }
    //     }
    //     if(i==num){
    //         cout<<num<<endl;
    //     }
    // }






    // befor switch statement
    // char button;
    // cout<<"input a char: ";
    // cin>>button;
    // if(button=='a'){
    //     cout<<"hello"<<endl;
    // }
    //  else if(button=='b'){
    //     cout<<"kishan"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"k"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"i"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"s"<<endl;
    // }
    // else{
    //     cout<<"degfault"<<endl;
    // }






    // switch statement
    // char button;
    // cout << "input a char: ";
    // cin >> button;
    // switch (button)
    // {
    // case 'a':
    //     cout << "k" << endl;
    //     break;
    // case 'b':
    //     cout << "i" << endl;
    //     break;
    // case 'c':
    //     cout << "s" << endl;
    //     break;
    // case 'd':
    //     cout << "h" << endl;
    //     break;
    // case 'e':
    //     cout << "an" << endl;
    //     break;
    // default:
    //     cout << "dafault" << endl;
    //     break;
    // }







    // calculator help of switch statement
    //     float a, b;
    //     cout << "enter value a and b";
    //      cin >> a >> b;
    //     char op;
    //     cout << "enter a char";
    //     cin >>op;
    //     switch (op)
    //     {
    //     case '+':
    //         cout << a + b << endl;
    //         break;
    //      case '-':
    //         cout << a - b << endl;
    //         break;
    //  case '*':
    //         cout << a * b << endl;
    //         break;
    //  case '/':
    //         cout << a / b << endl;
    //         break;

    //     default:
    //     cout<<"this is another operator";
    //         break;
    //     }






    // increment operator
    // int i=10,j=20,k;
    // // 10 -  9   +  19 -  20 +   9 - 20 + 10 - 19
    // k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    // cout<<k<<endl;






    // pattern print



    // ractangular
    // * * *
    // * * *
    // * * *
    // int i, j, row, col;
    // cout << "enter row and column";
    // cin >> row >> col;
    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= col; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
   




    // holo ractangular
    // int i, j, row, col;
    // cout << "enter row and column";
    // cin >> row >> col;
    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row)
    //         {
    //             cout << "*";
    //         }
    //         else if (j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }







    // holo ractangular short code
    // int i, j, row, col;
    // cout << "enter row and column";
    // cin >> row >> col;
    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row ||j == 1 || j == col)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }






    // decrease order
    // * * *
    // * *
    // *
    // int i,j ,n;
    // cin>>n;
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<" "<<"\n";
    // }






    // increase order
    //     *
    //   * *
    // * * *
    // int i, j, n;
    // cin >> n;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << " "
    //          << "\n";
    // }






    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }





    // 1 
    // 2 3
    // 4 5 6
    // int n,count=1;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){

    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }






    // butterfly pattern
    // *         *
    // * *     * *
    // * * * * * *
    // * * * * * * 
    // * *     * * 
    // *         *
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     int space=2*n-2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=n ; i>=1;i--){
    //     for(int j=1;j<=i;j++){ 
    //         cout<<"*"<<" ";
    //     }
    //     int space=2*n-2*i;
    //     for(int j=1;j<=space;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }






    // 1 2 3
    // 1 2
    // 1
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }






    //  0-1 pattern
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if((i+j)%2==0){
    //             cout<<"1"<<" "; //         else{
    //             cout<<"0"<<" ";
    //         }
    //     }
    //         cout<<endl;
    // }







    // rhombus pattern
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }







    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }






    // palindromic pattern
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     int j;
    //     for(j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //    int k=i;
    //    for(;j<=n;j++){
    //     cout<<k--<<" ";
    //    }
    //    k=2;
    //    for(;j<=n+i-1;j++){
    //     cout<<k++<<" ";
    //    }
    //     cout<<endl;
    // }
    // cout<<"kishan";





    
    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     int j;
    //     for(j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=2*i-1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }






    // for(int i=n;i>=1;i--){
    //     int j;
    //     for(j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(j=1;j<=2*i-1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


   




//    zig-zag pattern
    // int n;
    // cin>>n;
    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=n;j++){
    //         if(((i+j)%4==0) || (i==2 && j%4==0)){
    //             cout<<"*"<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //         cout<<endl;
    // }


    return 0;
}