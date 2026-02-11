#include <bits/stdc++.h>
using namespace std;
//problem link https://www.codechef.com/problems/NETFLIX
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c,d; cin>>a>>b>>c>>d;
	    if((a+b>=d) || (a+c>=d)||(b+a>=d)||(b+c>=d)||(c+a>=d)||(c+b>=d)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
