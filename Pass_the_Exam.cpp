#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/PASSTHEEXAM
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    if (a >= 10 && b >= 10 && c >= 10 && (a + b + c) >= 100){
	        cout<<"PASS"<<endl;
	    }
	    
	    else{
	        cout<<"FAIL"<<endl;
	    }
	}

}
