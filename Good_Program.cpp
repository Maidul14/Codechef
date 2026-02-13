#include <bits/stdc++.h>
using namespace std;
//problem link: https://www.codechef.com/problems/NIBBLE?tab=ide
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int x ; cin>>x;
        if(x%4==0){
            cout<<"Good"<<endl;
        }
        else{
            cout<<"Not Good"<<endl;
        }
    }
      
    return 0;
}