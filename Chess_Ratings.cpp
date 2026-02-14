#include <bits/stdc++.h>
using namespace std;
//problem link :https://www.codechef.com/problems/C_RATING?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x,y ; cin>>x>>y;
        int count = 0;
       while (1)
       {
        if(y>x){
            count++;
            x=x+8;
        }
        else if(x>=y){
        break;
       }
       }
       cout<<count<<endl;
       
    }  
    return 0;
}