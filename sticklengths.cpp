#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>stick(n);
    for(int i=0;i<n;i++){
        cin>>stick[i];
    }
    sort(stick.begin(),stick.end());
    ll med=stick[n/2],cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(stick[i]-med);
    }
    cout<<cost<<endl;
}