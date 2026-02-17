#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/SPCP2
int main() {
	int test ; cin>>test;
	while(test--){
	    int x , n ; cin>>x>>n;
	    int a = (n+99)/100;
	    int b = a-x;
	    if(b<0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	}

}
