#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TVDISC
int main() {
	int test ; cin>>test ; 
	while(test--){
	    int a,b,c,d; cin>>a>>b>>c>>d;
	    int first = a-c;
	    int secend = b-d;
	    if(first>secend){
	        cout<<"Second"<<endl;
	    }
	    else if(secend>first){
	        cout<<"First"<<endl;
	    }
	    else{
	       cout<<"Any"<<endl;
        }
	}

}
