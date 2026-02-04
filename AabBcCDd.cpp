#include <bits/stdc++.h>
using namespace std;

int main(){
    int test ; cin>>test;
    while (test--)
    {
        int n ; cin>>n;
        string s ; cin>>s;
        int count1=0 , count2=0;
        int frequency[26]={0};
        for (int i = 0; i <s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            frequency[s[i]-'a']++;
        }
        for (int i = 0; i <26; i++)
        {
            if(frequency[i]>count1){
                count2= count1;
                count1=frequency[i];
            }
            else if(frequency[i]>count2){
                count2=frequency[i];
            }
        }
        int result = count1+count2;
        cout<<result<<endl; 
    }
      
    return 0;
}