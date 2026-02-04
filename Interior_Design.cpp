#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/INTRDSGN
int main() {
	int test ; cin>>test;
	while(test--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int first= x1+y1;
	    int sec = x2+y2;
	    if(first>sec){
	        cout<<sec<<endl;
	    }
	    else if(sec>=first){
	        cout<<first<<endl;
	    }
	}

}
