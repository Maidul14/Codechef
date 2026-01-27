#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/PIZZAPARTY
int main(){
    int B,G; cin>>B>>G;
    int boy = (B+1)*4;
    int girl = G*3;
    int total = boy+girl;
    int need =(total+7)/8;
    cout<<need;
    return 0;
}