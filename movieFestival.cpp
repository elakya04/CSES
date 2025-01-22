#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;cin>>n;
  vector<pair<ll,ll>>mov;
  for(int i=0;i<n;i++){
    ll a,b;cin>>a>>b;
    mov.emplace_back(b,a);
  }  
  sort(mov.begin(),mov.end());
  ll cur=0,count=0;
  for(auto m:mov){
    if(m.second>=cur){
        ++count;
        cur=m.first;
    }
  }
  cout<<count<<endl;
}