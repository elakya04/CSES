#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll x,n;
    cin>>x>>n;
    vector<ll>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
   set<pair<ll,ll>>ranges;
   ranges.insert({0,x});
   multiset<ll>ranlen;
   ranlen.insert(x);
   for(int i=0;i<n;i++){
    ll pos=p[i];
    auto it=ranges.upper_bound({pos,0});
    --it;
    ll start=it->first;
    ll end=it->second;
    ranges.erase(it);
    ranlen.erase(ranlen.find(end-start));
    ranges.insert({start,pos});
    ranges.insert({pos,end});
    ranlen.insert(pos-start);
    ranlen.insert(end-pos);
    cout<<*ranlen.rbegin()<<" ";

   }
}