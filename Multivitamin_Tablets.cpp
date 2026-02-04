#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TABLETS
int main() {
	int test; cin>>test;
	while(test--){
	    int a,b; cin>>a>>b;
	    int tablet=a*3;
	    if(b>=tablet){
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}

}
