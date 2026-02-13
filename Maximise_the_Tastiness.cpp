#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/MAXTASTE?tab=ide
int main(){
    int test ; cin>>test ;
    while(test--){
        int a1,a2,b1,b2; cin>>a1>>a2>>b1>>b2;
        int mx1= max(a1,a2);
        int mx2= max(b1,b2);
        cout<<mx1+mx2<<endl;
    }
    return 0;
}