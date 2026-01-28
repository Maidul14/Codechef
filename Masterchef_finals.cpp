#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/TOP10
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        if(n<=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}