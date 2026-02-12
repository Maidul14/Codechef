#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/WATERFILLING
int main() {
	int test ; cin>>test ; 
	while(test--){
	    int a,b,c ; cin>>a>>b>>c;
	    int res = a+b+c;
	    if(res>=2){
	        cout<<"Not now"<<endl;
	    }
	    else{
	        cout<<"Water filling time"<<endl;
	    }
	}

}
