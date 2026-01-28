#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/HEALSE
int main(){
    int h ; cin>>h;
    if(h<8) cout<<"LESS";
    if(h==8) cout<<"PERFECT";
    if(h>8) cout<<"MORE";
    return 0;
}