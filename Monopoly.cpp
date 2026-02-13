#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/MONOPOLY2
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c,d; cin>>a>>b>>c>>d;
	    if((a+b+c)<d || (a+b+d)<c || (a+c+d)<b || (b+c+d)<a ){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
