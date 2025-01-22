#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>cube(n);
    for(int i=0;i<n;i++){
        cin>>cube[i];
    }
    ll ans=0;
    multiset<ll>m;
    for(int i=0;i<n;i++){
        auto it=m.upper_bound(cube[i]);
        if(it==m.end()){
            ++ans;
            m.insert(cube[i]);
        }
        else{
            m.erase(it);
            m.insert(cube[i]);
        }
    }
cout<<ans<<endl;
}