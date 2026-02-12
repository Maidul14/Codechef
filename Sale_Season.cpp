#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SALESEASON
int main() {
	int test ; cin>>test;
	while(test--){
	    int x; cin>>x;
	    if(x<=100){
	        cout<<x<<endl;
	    }
	    else if(100<x && x<=1000){
	        cout<<x-25<<endl;
	    }
	    else if(1000<x && x<=5000){
	        cout<<x-100<<endl;
	    }
	    else if(x>5000){
	        cout<<x-500<<endl;
	    }
	}

}
