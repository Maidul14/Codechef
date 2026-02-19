#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/FIZZBUZZ23_2
int main() {
	int test ; cin>>test;
	while(test--){
	    int n, x,d ; cin>>n>>x>>d;
	    int every = x*5;
	    int want = n/every;
	    cout<<want+d<<endl;
	}

}
