#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SCALENE
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a!=b)&&(a!=c)&&(b!=a)&&(b!=c)&&(c!=a)&&(c!=b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	

}
