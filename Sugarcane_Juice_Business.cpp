#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SUGARCANE
int main() {
	int test ; cin>>test;
	while(test--){
	    int x ; cin>>x;
	    int income = x*50;
	    int per20 = income*20/100;
	    int per30 = income*30/100;
	    cout<<income-(per20+per20+per30)<<endl;
	}

}
