#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TEA?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x ,y,z ; cin>>x>>y>>z;
        int cost = (x+y -1)/y;
        cout<<cost*z<<endl;

    }
      
    return 0;
}
