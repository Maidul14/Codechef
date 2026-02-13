#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/JENGA?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n,x; cin>>n>>x;
        if(x%n==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
      
    return 0;
}