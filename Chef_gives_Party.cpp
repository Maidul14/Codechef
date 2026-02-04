#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/PARTY2
int main() {
	int test ; cin>>test ;
	while(test--){
	    int n,x,k; cin>>n>>x>>k;
	    int price = n*x ;
	    if(price<=k){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}

}
