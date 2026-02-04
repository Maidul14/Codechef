#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CABS
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b; cin>>a>>b;
	    if(b>a){
	        cout<<"FIRST"<<endl;
	    }
	    else if(a>b){
	        cout<<"SECOND"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}

}
