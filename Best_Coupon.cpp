#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CHEAPFOOD
int main(){
    int test ; cin>>test;
    while(test--){
        int n ; cin>>n;
        int perc = n*10/100;
        int mx =max(perc,100);
        cout<<mx<<endl;
    }  
    return 0;
}