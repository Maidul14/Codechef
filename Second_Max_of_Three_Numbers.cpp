#include <bits/stdc++.h>
using namespace std;
//problem link : https://www.codechef.com/problems/SNDMAX
int main(){
    int test ; cin>>test;
    while (test--)
    {
        int a,b,c ; cin>>a>>b>>c;
        if(((a>b)&&(a<c))||((a<b)&&(a>c))){
            cout<<a<<endl;
        }
        else if(((b>c)&&(b<a))||((b<c)&&(b>a))){
            cout<<b<<endl;
        }
        else if(((c>a)&&(c<b))||(c<a)||(c>b)){
            cout<<c<<endl;
        }
    }  
    return 0;
}