#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/CHOLY
int main(){
    int x,y,z ; cin>>x>>y>>z;
    double our = x + 0.5*y;
    double opp = z + 0.5*y;

    int remaining = 4 - (x+y+z);

    if(our + remaining > opp){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
