#include <bits/stdc++.h>
using namespace std;
int main() {
	int test ; cin>>test;
	while(test--){
	    int n ; cin>>n;
	    int arr[n];

	    int odd=0;
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i];
	        if(arr[i]%2==0){
	            continue;
	        }
            else{
                odd++;
            }
	    }
	    if(odd%2==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}

}
