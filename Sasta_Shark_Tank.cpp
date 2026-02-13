#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/SST?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x,y ; cin>>x>>y;
        int a1= x*10;
        int a2= y*5;
        if(a2>a1){
            cout<<"SECOND"<<endl;
        }
        else if(a1>a2){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
        
    }
      
    return 0;
}