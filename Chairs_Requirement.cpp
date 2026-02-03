#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CHAIRS_
int main() {
	int test ; cin>>test ;
	while(test--){
	    int x,y; cin>>x>>y;
	    if(y>=x){
	        cout<<0<<endl;
	    }
	    else cout<<x-y<<endl;
	}

}
