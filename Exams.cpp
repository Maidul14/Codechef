#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/EXAMCHEF
int main() {
	int test ; cin>>test ;
	while(test--){
	    int a,b,c; cin>>a>>b>>c;
	    int student = a*b;
	    if(c>student/2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}

}
