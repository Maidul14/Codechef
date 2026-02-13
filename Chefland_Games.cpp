#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CHEFGAMES
int main() {
	int test ; cin>>test ;
	while(test--){
	    int a,b,c,d ; cin>>a>>b>>c>>d;
	    int res = a+b+c+d;
	    if(res<1){
	        cout<<"IN"<<endl;
	    }
	    else{
	        cout<<"OUT"<<endl;
	    }
	}

}
