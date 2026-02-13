#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TRAVELFAST
int main() {
	int test ; cin>>test;
	while(test--){
	    int b ,c; cin>>b>>c;
	    if(b>c){
	        cout<<"CAR"<<endl;
	    }
	    else if(c>b){
	        cout<<"BIKE"<<endl;
	    }
	    else if(b==c){
	        cout<<"SAME"<<endl;
	    }
	}
}
