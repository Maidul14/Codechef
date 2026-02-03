#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/DETSCORE
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x,n ; cin>>x>>n;
        int res  = x/10 ;
        cout<<res*n<<endl;

    }
    
    return 0;
}