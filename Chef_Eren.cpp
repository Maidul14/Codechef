#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CHEFEREN
int main() {
	int test ; cin>>test ;
	while(test--){
	    int n,b,c ; cin>>n>>b>>c ;
	    int odd= (n+1)/2;
	    int even= n/2;
	    int total = odd*c + even *b;
	    cout<<total<<endl;
	    
	}

}
