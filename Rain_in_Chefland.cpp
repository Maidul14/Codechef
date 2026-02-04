#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/RAINFALL1
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        if(n<3){
            cout<<"LIGHT"<<endl;
        }
        else if((n>=3)&&(n<7)){
            cout<<"MODERATE"<<endl;
        }
        else if(n>=7){
            cout<<"HEAVY"<<endl;
        }
    }   
    return 0;
}