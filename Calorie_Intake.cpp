#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CALINTAKE
int main(){
    int x,y,z; cin>>x>>y>>z;
    int res=y*z;
    if(x>=res){
        cout<<x-res;
    } 
    else{
        cout<<-1;
    }
    return 0;
}