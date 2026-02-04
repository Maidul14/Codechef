#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/AUCTION
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    if((a>b)&&(a>c)){
	        cout<<"Alice"<<endl;
	    }
	    else if((b>a)&&(b>c)){
	        cout<<"Bob"<<endl;
	    }
	    else if((c>a)&&(c>b)){
	        cout<<"Charlie"<<endl;
	    }
	}

}
