#include <iostream>
using namespace std;
//problem link : https://www.codechef.com/problems/ONEFULPAIRS
int main() {
    int a,b;
    cin>>a>>b;
	int res=a+b+(a*b);
	if(res==111){
	    cout<<"YES";
	}
	else cout<<"NO"<<endl;
	return 0;
}
