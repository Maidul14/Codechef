#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/ASSIGNMNT
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    int min = a*b;
	    int day= c*24*60;
	    if(min>day){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}

}
