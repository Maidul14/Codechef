#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/MAXDIFFMIN
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    int mx= max({a,b,c});
	    int mn= min({a,b,c});
	    cout<<mx-mn<<endl;
	}

}
