#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/FARMLEGS
int main(){
	 int t;  
    cin >> t;

    while(t--) {
        int N;
        cin >> N;
        if(N%4==0)
            cout<<N/4<<endl;
        else
            cout <<(N/4)+1<<endl;
    }
    

}
