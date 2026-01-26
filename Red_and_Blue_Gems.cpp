#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/REDBLUEGEM
int main(){
    int r,b,p,q; cin>>r>>b>>p>>q;
    int r1 = r*p;
    int b2= b*q;
    if(r1>b2){
        cout<<r1;
    }
    else{
        cout<<b2;
    }
    return 0;
}