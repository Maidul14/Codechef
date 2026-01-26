#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/HWFIN
int main(){
    int x,y ; cin>>x>>y;
    int y1= y*10;
    int res= y1+x;
    if(res>=100){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}