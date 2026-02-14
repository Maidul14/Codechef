#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/BATH?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int g , b; cin>>g>>b;
        int person= b*2;
        if(person>g){
            cout<<0<<endl;
        }
        else{
            cout<<g/person<<endl;
        }
    }
      
    return 0;
}