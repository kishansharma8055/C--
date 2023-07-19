#include<iostream>    //header file
#include<algorithm>  //sort function declare in this file
#include<string>     // string declare in this file
using namespace std;
int main(){
    // print a  same type word
    // string str1(5,'n');
    // cout<<str1;

    // declare and print a string
    // string str="kishan sharma";
    // cout<<str;

    // input a string and output a string
    // string str;
    // cin>>str;
    // cout<<str;

    // count a all space
    // string str;
    // getline(cin, str);
    // cout<<str;

    // add two string
    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);
    // // or
    // // s1=s1+s2;
    // // cout<<s1;
    // // ya
    // cout<<s1 + s2;

    // access a particular charactor
    // string s1="kishan";
    // cout<<s1[2]<<endl;

    // string ko clear karne ka liya clear function
    // string str="kishan sharma";
    // str.clear();
    // cout<<str<<endl;

    // compare two string
    // string s2="abc";
    // string s1="xyz";
    // cout<<s2.compare(s1)<<endl;

    // string empty ha ya nahi
    // string str="kishan sharma";
    // cout<<str<<endl;
    // str.clear();
    // if(str.empty()){
    //     cout<<"string is empty";
    // }
    // else{
    //     cout<<"string not empty";
    // }

    // deletion
    // string str="kissharmahan";
    // cout<<str<<endl;
    // str.erase(3,6);
    // cout<<str<<endl;

    // insertion
    // string str="kian";
    // cout<<str;
    // str.insert(2,"sh");
    // cout<<str;

    // find a char in particular index
    // string str="kissharmahan";
    // cout<<str.find("sha")<<endl;

    // size of string
    // string str="kishan sharma";
    // cout<<str.size();
    //     or
    // string str="kishan sharma";
    // cout<<str.length();

    // string str="kishan sharma";
    // for(int i=0;i<str.length();i++){
    // cout<<str[i]<<endl;
    // }

    // slice a string
    // string str="kishan shama";
    // string s=str.substr(3,5);
    // cout<<s;

    // string ko int ma change karne ka liya
    // string str="210";
    // cout<<str;
    // int x=stoi(str);
    // cout<<x+2;

    // // int to string ma convert
    // int x=210;
    // cout<<to_string(x)+'2';

    // sort a string it mean increasing order
    // string str="kishan sharma";
    // sort(str.begin(),str.end());
    // cout<<str;

    // sort a string it mean decreasing order
    // string str="23541";
    // sort(str.begin(), str.end(),greater<int>());
    // cout<<str<<endl;

    // convert a string in uppar case latter
    // string str ="kiShaN ShaRmA";
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]-=32;
    //     }
    //     // cout<<str[i];
    // }
    // cout<<str<<endl;

    // convert a string in lower case latter
    // string str ="kiShaN ShaRmA";
    // for(int i=0;i<str.size();i++){
    //     if(str[i]>='A' && str[i]<='Z'){
    //         str[i]+=32;
    //     }
    //     // cout<<str[i];
    // }
    // cout<<str<<endl;

    // convert a string in upper case latter
    // string str ="kiShaN ShaRmA";
    // transform(str.begin(),str.end(),str.begin(), ::toupper);
    // cout<<str;

    // convert a string in lower case latter
    // string str ="kiShaN ShaRmA";
    // transform(str.begin(),str.end(),str.begin(), ::tolower);
    // cout<<str;

    // print a charactor and its index no. who are max time in string
    // string str="kishan sharma";
    // int frequency[26];
    // for(int i=0;i<26;i++){
    //     frequency[i]=0;
    // }
    // for(int i=0;i<str.size();i++){
    //     frequency[str[i]-'a']++;
    // }
    // int max=0;
    // char ans='a';
    // for(int i=0;i<str.size();i++){
    //     if(frequency[i]>max){
    //         max=frequency[i];
    //         ans=i+'a';
    //     }
    // }
    // cout<<ans<<" "<<max<<endl;

    // this is not a valid code
    // string str="7357412534";
    // int f[10];
    // for(int i=0;i<10;i++){
    //     f[i]=0;
    // }
    // for(int i=0;i<str.size();i++){
    //     f[f[i]-48]++;
    // }
    // int max=0;
    // char ans;
    // for(int i=0;i<str.size();i++){
    //     if(f[i]>max){
    //         max=f[i];
    //         ans=i+48;
    //     }
    // }
    // cout<<ans<<" "<<max<<endl;

    // ASCII code for a charactor
    // int a;
    // cout<<"enter a number";
    // cin>>a;
    // cout<<"ascii code is a "<<" "<<int(a)<<endl;

    return 0;
}