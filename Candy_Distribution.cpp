#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/CANDYDIST
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b ; cin>>a>>b;
	    int c = (a+b-1)/b;
	    if(c%2==0){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}

}
