#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/TODOLIST
int main() {
	int test; cin>>test;
	while(test--){
	    int n ; cin>>n;
	    int count=0;
	    for(int i= 0 ; i<n; i++){
	        long long x ; cin>>x;
	        if(x>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}
