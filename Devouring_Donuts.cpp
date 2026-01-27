#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/DEVDON
int main(){
    int x,y; cin>>x>>y;
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum = sum +y;
    }
     cout<<sum;
    return 0;
}