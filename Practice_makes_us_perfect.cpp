#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/PRACTICEPERF
int main(){
    int a,b,c,d ; cin>>a>>b>>c>>d;
    int count=0;
    if(a>=10){
        count++;
    }
    if(b>=10){
        count++;
    }
    if(c>=10){
        count++;
    }
    if(d>=10){
        count++;
    }
    cout<<count<<endl;
      
    return 0;
}