#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BURGERS
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int a,b; cin>>a>>b;
        if(a==b) cout<<a<<endl;
        if(a>b) cout<<b<<endl;
        if(b>a) cout<<a<<endl;
    }  
    return 0;
}