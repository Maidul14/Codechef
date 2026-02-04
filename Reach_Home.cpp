#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/REACH_HOME
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b; cin>>a>>b;
	    int fuel= a*5;
	    if(fuel>=b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
