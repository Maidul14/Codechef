#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/QUALIFY
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x ,a,b; cin>>x>>a>>b;
        int point = a*1 + b*2;
        if(point>=x){
            cout<<"Qualify"<<endl;
        }
        else{
            cout<<"NotQualify"<<endl;
        }
    }
      
    return 0;
}