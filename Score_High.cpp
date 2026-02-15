#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/HIGHSCORE?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        int big = 0 ;
        for(int i=0 ; i<4 ; i++){
            int a ; cin>>a;
            big = max(big,a);
        }
        cout<<big<<endl;
    }
      
    return 0;
}