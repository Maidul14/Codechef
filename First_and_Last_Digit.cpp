#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FLOW004
int main(){
    int test ; cin>>test;
    while (test--)
    {   
        int n ; cin>>n;
        int last = n%10;
        while(n>=10){
            n/=10;
        }
        cout<<n+last<<endl;
    }
      
    return 0;
}