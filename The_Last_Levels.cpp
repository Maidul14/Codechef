#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/LASTLEVELS?tab=ide
int main(){
    int test ; cin>>test;
    while(test--){
        int x,y,z ; cin>>x>>y>>z;
        int total = x*y ;
        int brk = (x-1)/3 ;
        total = total + (brk*z) ;
        cout<<total<<endl;
    }  
    return 0;
}