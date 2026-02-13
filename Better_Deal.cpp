#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BETDEAL
int main() {
	int test ; cin>>test;
	while(test--){
	    int a ,b ; cin>>a>>b;
	    int first = 100 * (100 - a) / 100;
        int sec = 200 * (100 - b) / 100;
	    if(first<sec){
	        cout<<"FIRST"<<endl;
	    }
	    else if(sec<first){
	        cout<<"SECOND"<<endl;
	    }
	    else if(first==sec){
	        cout<<"BOTH"<<endl;
	    }
	}

}
