#include <bits/stdc++.h>
using namespace std;
//pronlem link : https://www.codechef.com/problems/DISCUS
int main(){
    int test; cin>>test;
    while(test--){
        int a,b,c; cin>>a>>b>>c;
        int mx= max({a,b,c});
        cout<<mx<<endl;
    }  
    return 0;
}