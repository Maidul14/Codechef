#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/EPISODES
int main() {
	int test ; cin>>test;
	while(test--){
	    int a,b; cin>>a>>b;
	    int total =a*b;
	    int hour = total/60;
	    int min = total%60;
	    cout<<hour<<" "<<min<<endl;
	}

}
