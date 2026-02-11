#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/WATERCOOLER1
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    int rent= a*c;
	    if(b>rent){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
