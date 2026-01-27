#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TOYS
int main(){
    int n,m; cin>>n>>m;
    if(n<m){
        cout<<0;
    } 
    else{
        cout<<n-m;
    }
    return 0;
}