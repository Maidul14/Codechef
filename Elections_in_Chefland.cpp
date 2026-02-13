#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/ELECTN?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n,x; cin>>n>>x;
        int count = 0;
        for (int  i = 0; i <n; i++)
        {
            int y ; cin>>y;
            if(y>=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
      
    return 0;
}