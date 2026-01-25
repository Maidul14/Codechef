#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/TRICHECK
int main() {
	int a,b,c; cin>>a>>b>>c;
	if((a+b)>c && (b+c)>a && (a+c)>b){
	    cout<<"Yes";
	}
    else{
        cout<<"No";
    }
}
