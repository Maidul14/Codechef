#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SHOM
int main(){
    int a,b ; cin>>a>>b;
    if(a>b){
        int res1 = a-b;
        cout<<res1;
    }  
    else if(b>a){
        int res2 = b-a;
        cout<<res2;
    }
    else{
        cout<<0;
    }
    return 0;
}