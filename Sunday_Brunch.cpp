#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/BRUNCH?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int a,b ; cin>>a>>b;
        cout<<min(20,a/b)<<endl;
    }
      
    return 0;
}