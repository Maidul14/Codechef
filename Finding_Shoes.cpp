#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FINDSHOES?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x,y ; cin>>x>>y;
        if(y>=x){
            cout<<x<<endl;
        }
        else{
            cout<<2*x-y<<endl;
        }
        
    }
      
    return 0;
}