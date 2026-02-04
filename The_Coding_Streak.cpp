#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        int arr[n];
        int count=0;
        int mx= 0;
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>0){
                 count++;
                 mx=max(mx,count);
            }
            else{
                count=0;
            }
            
        }
        cout<<mx<<endl;
        
    }  
    return 0;
}