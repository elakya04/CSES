#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll q;
        cin>>q;
        ll base=1,digit=9,len=1;
        while(q>len*digit){
            q-=len*digit;
            base*=10;
            digit*=10;
            len++;
        }
        ll num=base+(q-1)/len;
        ll pos=(q-1)%len;
        for(int i=0;i<len-pos-1;i++)
        num/=10;
        cout<<num%10<<endl;
    }
}