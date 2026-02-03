#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BULLBEAR
int main() {
	int test ; cin>>test ; 
	while(test--){
	    int a,b; cin>>a>>b;
	    if(a>b){
	        cout<<"LOSS"<<endl;
	    }
	    else if(b>a){
	        cout<<"PROFIT"<<endl;
	    }
	    else if(a==b){
	        cout<<"NEUTRAL"<<endl;
	    }
	}

}
