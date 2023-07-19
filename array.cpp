// 1
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
// // nor
// // int a[4]={4,5,5,6};
// // cout<<a[3]<<endl;
// // user sa input lena ha
// int n;
// cin>>n;
// int a[n];
// //input lana ka liya
// for(int i=0;i<n;i++){
//     cin>>a[i];
// }
// //input num ko output karna ka liya
// // for(int i=0;i<n;i++){
// //     cout<<a[i]<<" ";
// // }
// // find a max and min number in given array
// int maxNo=INT_MIN;
// int minNo=INT_MAX;
// for(int i=0;i<n;i++){
//     maxNo=max(maxNo,a[i]);
//     minNo=min(minNo,a[i]);
// }
// cout<<maxNo<<endl;
// cout<<minNo<<endl;
// }

// 2. linearsearch
// // in the linearsearch time complaxity is O(n)
// #include <iostream>
// #include <climits>
// using namespace std;
// int lenearsearch(int a[], int n, int key);
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int key;
//     cin >> key;
//     cout << lenearsearch(a, n, key);
//     cout << endl;
// }
// int lenearsearch(int a[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// 3. binary search
// // in the binary search ki time complixity is O(logn, base2 )
// #include <iostream>
// // #include <climits>
// using namespace std;
// int binarysearch(int a[], int n, int key);
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int key;
//     cin >> key;
//     cout << binarysearch(a, n, key) << endl;
//     return 0;
// }
// int binarysearch(int a[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     while (s <= e)
//     {
//         int mid = ((s + e) / 2);
//         if (a[mid] == key)
//         {
//            return mid;
//         }
//         else if (a[mid] > key)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }

// // 4. sorting in array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 int k=a[j];
//                 a[j]=a[i];
//                 a[i]=k;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// 5. bubble sort array
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int counter =1;
//     while(counter<=n-1){
//         for(int i=0;i<n-counter;i++){
//             if(a[i]>a[i+1]){
//                 int k=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=k;
//             }
//         }
//         counter++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//     return 0;
// }

// 6. max in array
// #include<iostream>
// using namespace std;
// int main(){
//     int n ,mx=-9999999;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         mx=max(mx, a[i]);
//     }
//         cout<<mx<<endl;
//     return 0;
// }

// 7. subarray in array
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int sub=0;
//     for(int i=0;i<n;i++){
//         sub=0;
//         for(int j=i;j<n;j++){
//             sub+=a[j];
//             cout<<sub<<endl;
//         }
//     }
//     return 0;
// }

// /********** interview ma puche gay question ************/
// 8. longest arithematic subarray  =  AP
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int pcd=a[1]-a[0];
//     int ans=2;
//     int j=2;
//     int current=2;
//     while (j<n)
//     {
//          if(pcd = a[j]-a[j-1]){
//             current++;
//          }
//          else{
//             pcd=a[j]-a[j-1];
//             current = 2;
//          }
//          ans=max(ans, current);
//          j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// 9. record breaker
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n+1];
//     a[n]= -1;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }
//     int ans=0;
//     int mx=-1;
//     for(int i=0;i<n;i++){
//         if(a[i]>mx && a[i]>a[i-1]){

//             ans++;
//         }
//         mx=max(mx, a[i]);
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// 10. this program is not run in my pc
// first repeating element
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N=1e4+2;
//     // 1a6+2 = 1000002
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]-1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[a[i]]!=-1){
//             minidx=min(minidx, idx[a[i]]);
//         }
//         else{
//             idx[a[i]]=i;
//         }
//     }
//     if(minidx==INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx + 1 <<endl;
//     }
//     return 0;
// }
// corract answer
// input 7
// 1 5 3 4 3 5 6
// output 2

// samj ma nahi aaya
// 11. subarray with giver sum
// #include <iostream>
// using namespace std;
// int main()
// {
//     int number, sum_of_sub_array;
//     cin >> number >> sum_of_sub_array;
//     int a[number];
//     for (int i = 0; i < number; i++)
//     {
//         cin >> a[i];
//     }
//     int i = 0, j = 0, start = -1, end = -1, sum = 0;
//     while (j < number && sum + a[j] <= sum_of_sub_array)
//     {
//         sum += a[j];
//         j++;
//     }
//     if (sum == sum_of_sub_array)
//     {
//         cout << i + 1 << " " << j << endl;
//         return 0;
//     }
//     while (j < number)
//     {
//         sum += a[j];
//         while (sum > sum_of_sub_array)
//         {
//             sum -= a[i];
//             i++;
//         }
//         if (sum == sum_of_sub_array)
//         {
//             start = i + 1;
//             end = j + 1;
//             break;
//         }
//         j++;
//     }
//     cout << start << " " << end << endl;
//     return 0;
// }
// output
//  input = 5 12
// 1 2 3 7 5
//  result = 2 4
// this given a index value

// 12. smallest positive missing number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     const int N=1e6+2;
//     bool check[N];
//     for(int i=0;i<N;i++){
//         check[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>=0)
//         check[a[i]]=1;
//     }
//     int ans=-1;
//     for(int i=1;i<N;i++){
//         if(check[i]==0){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// 13. subarray
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//             cout<<a[k]<<" ";
//             }
//         cout<<endl;
//         }
//     }
//     return 0;
// }

// 14. maximam subarray sum
// Time complaxity is O(n^3)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//               sum+=a[k];
//             // cout<<a[k]<<" ";
//             }
//         // cout<<endl;
//         maxsum=max(maxsum, sum);
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }

// 15. maximam subarray sum
// Time complaxity is O(n^2)
// #include<iostream>
// using namespace std ;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currentsum[n+1];
//     currentsum[0]=0;
//     for(int i=1;i<=n;i++){
//         currentsum[i]=currentsum[i-1]+a[i-1];
//     }
//     int maxsum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=currentsum[i]-currentsum[j];
//             maxsum=max(maxsum, sum);
//         }
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }

// 16. maximam subarray sum
// Time complaxity is O(n)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentsum+=a[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum, currentsum);
//     }
//     cout<<maxsum<<endl;
//     return 0;
// }

// 17. maximam circular sum
// #include<iostream>
// #include<climits>
// using namespace std;
// int kadane(int a[],int n){
//     int currentsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currentsum+=a[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum, currentsum);
//     }
//     return maxsum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int wrapsum;
//     int nonwrapsum;
//     nonwrapsum=kadane(a, n);
//     int totalsum=0;
//     for(int i=0;i<n;i++){
//         totalsum+=a[i];
//         a[i]=-a[i];
//     }
//     wrapsum=totalsum+kadane(a, n);
//     cout<<max(wrapsum, nonwrapsum)<<endl;
//     return 0;
// }

// 18. pair sum
// #include<iostream>
// using namespace std;
// bool pairsum(int a[],int n,int k){
//     for(int i=0;i<=n-1;i++){
//         for(int j=i+1;j<=n;j++){
//             if(a[i]+a[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int a[]={5,9,6,10,11,15,8};
//     int k=20;
//     cout<<pairsum(a, 7, k);
//     return 0;
// }

// 19. pair sum short
// #include<iostream>
// using namespace std;
// bool pairsum(int a[],int n,int k){
//     int l=0;
//     int h=n-1;
//     if(l+h==k){
//         cout<<l<<h<<endl;
//         return 1;
//     }
//     else if(l+h>k){
//         h--;
//     }
//     else{
//         l++;
//     }
//     return false;
// }
// int main(){
//     int a[]={5,9,6,10,11,15,8};
//     int k=20;
//     cout<<pairsum(a, 7, k);
//     return 0;
// }

// 20
// // 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     // array input ka liya
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     // array output ka liya
//     cout<<"matrix"<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }
//     // element ko search karna ka liya
//     int x;
//     cin>>x;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]==x){
//                 cout<<i<<" "<<j;
//                 flag=true ;
//             }
//         }
//     }
//     cout<<endl;
//     if(flag){
//         cout<<"element is found \n";
//     }
//     else{
//         cout<<"element is not found\n";
//     }
//     return 0;
// }

// 21. spiral order matrix traversal
// // 5 6
// // 3 2
// // 5 6 2 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     // array input ka liya
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     // spiral order print
//     int row_start=0,row_end=n-1,cal_start=0,cal_end=m-1;
//     while (row_start<=row_end && cal_start<=cal_end)
//     {
//         // for row_start
//         for(int cal=cal_start; cal<=cal_end;cal++){
//             cout<<a[row_start][cal]<<" ";
//         }
//         row_start++;
//         // for cal_end
//         for(int row=row_start; row<=row_end;row++){
//             cout<<a[row][cal_end]<<" ";
//         }
//         cal_end--;
//         // for row_end
//         for(int cal=cal_end; cal>=cal_start;cal--){
//             cout<<a[row_end][cal]<<" ";
//         }
//         row_end--;
//         // for cal_start
//         for(int row=row_end; row>=row_start;row--){
//             cout<<a[row][cal_start]<<" ";
//         }
//         cal_start--;

//     }
//     return 0;
// }

// 22. matrix transpose
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     // before transpose
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     cout<<endl;
//     // transpose
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             // swap
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//         }
//     }
//     // print transpose matrix
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// 23. matrix multiplication
// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2],m2[n2][n3];
//     // firsst array input
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             cin>>m1[i][j];
//         }
//     }
//     // second array input
//     for(int i=0;i<n2;i++){
//         for(int j=0;j<n3;j++){
//             cin>>m2[i][j];
//         }
//     }
//     // final array ma zero element ha
//     int ans[n1][n3];
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             ans[i][j]=0;
//         }
//     }
//     // final array increment ho raha ha
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             for(int k=0;k<n2;k++){
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
//         }
//     }
//     // final array output
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n3;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 24. matrix search
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m ,target;
//     cin >> n >>m>>target;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     int  r = 0, c = m - 1;
//     bool found = false;
//     while (r < n and c >= 0)
//     {
//         if (a[r][c] == target)
//         {
//             found = true;
//         }
//         else if (a[r][c] > target)
//         {
//             c--;
//         }
//         else
//         {
//             r++;
//         }
//     }
//     if(found){
//         cout<<"element found";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }

// charcater array

// 25. last element always a null charactor
// #include<iostream>
// using namespace std;
// int main(){
// char arr[100]="kishan";
// int i=0;

// input
// char arr[100];
// cin>>arr;
// cout<<arr<<endl;
// cout<<arr[2]<<endl;

// while (arr[i]!='\0')
// {
//     cout<<arr[i]<<endl;
//     i++;
// }
// return 0;
// }

// 26. check palindrome
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//     bool check=1;

//     for(int i=0;i<n/2;i++){
//         if(arr[i]!=arr[n-1-i]){
//             check=0;
//             break;
//         }
//     }
//     if(check==true){
//         cout<<"palindrom";
//     }
//     else{
//         cout<<"not palindrom";
//     }
//     return 0;
// }
