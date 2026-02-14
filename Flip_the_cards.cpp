#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FLIPCARDS?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n,x ; cin>>n>>x;
        int mn = min(x,n-x);
        cout<<mn<<endl;
    }
      
    return 0;
}