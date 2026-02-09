#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BROKENPHONE
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b; cin>>a>>b;
	    if(a>b){
	        cout<<"NEW PHONE"<<endl;
	    }
	    else if(b>a){
	        cout<<"REPAIR"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}

}
