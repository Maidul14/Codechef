#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CRICUP
int main(){
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=n/10;
        if(n%10==9)ans++;
        cout<<ans<<endl;
    }  
    return 0;
}