#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/INCAT
int main(){
    string s; cin>>s;
    if((s[0]=='c'||s[1]=='c' || s[2]=='c')&& (s[0]=='a'||s[1]=='a'||s[2]=='a')&&(s[0]=='t'|| s[1]=='t'||s[2]=='t')){
        cout<<"Yes";
    } 
    else{
        cout<<"No";
    }
    return 0;
}