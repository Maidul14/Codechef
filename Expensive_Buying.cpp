#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/BUYING7
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ,k ; cin>>n>>k;
        int arr[n+1];
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=0;
        for (int  i = n-k; i < n; i++)
        {
            count+=arr[i];
        }
        cout<<count<<endl;
    }
      
    return 0;
}