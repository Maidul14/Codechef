#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/MAXTRI
int main(){
    int test ; cin>>test;
    while(test--){
        int n ; cin>>n;
        int a=n ;
        int b=n-1 ;
        int c=n-2;
        int total= a+b+c ;
        int mx= max({a,b,c});
        int mx2 = 2*mx;
        if(total>mx2){
            cout<<total<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}