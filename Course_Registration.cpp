#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/COURSEREG
int main() {
    int test ; cin>>test;
    while(test--){
	    int a,b,c ; cin>>a>>b>>c;
	    int res = a+c;
	    if(res>b){
	        cout<<"NO"<<endl;
	        
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
    }

}
