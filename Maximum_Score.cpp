#include <bits/stdc++.h>
using namespace std;

int main() {
	int test ; cin>>test;
	while(test--){
	    int  n; cin>>n;
	    int arr[n] ,arr2[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }
	    int total =0;
	    for(int i=0 ;i<n;i++){
	        total= total+arr[i];
	    }
	    int loss = arr[0]-arr2[0];
	    for(int i=0 ; i<n ; i++){
	        int loss2= arr[i]-arr2[i];
	        if(loss2<loss){
	            loss= loss2;
	        }
	    }
	    int res= total-loss;
	    cout<<res<<endl;
	    
	}

}
