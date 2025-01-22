#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    set<pair<ll,ll>>s;
    ll t1,t2;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        s.insert({t1,t2});
    }
}