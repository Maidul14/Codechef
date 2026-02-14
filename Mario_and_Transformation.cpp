#include <bits/stdc++.h>
using namespace std;
//problem link: https://www.codechef.com/problems/TRANSFORM?tab=ide
int main(){
    int test ; cin>>test;
    while(test--){
        int a; cin>>a;
        if(a%3==0){
            cout<<"NORMAL"<<endl;
        }
        else if(a%3==1){
            cout<<"HUGE"<<endl;
        }
        else{
            cout<<"SMALL"<<endl;
        }
    }  
    return 0;
}