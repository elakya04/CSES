#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n,tar;cin>>n>>tar;
   vector<pair<ll,ll>>a; 
   for(ll i=0;i<n;i++){
    ll x;cin>>x;
    a.push_back({x,i+1});
   }
   sort(a.begin(),a.end());
   int left=0,right=n-1;
   while(left<right){
    ll sum=a[left].first+a[right].first;
    if(sum>tar)
    --right;
    else if(sum<tar)
    ++left;
    else {
        cout<<a[left].second<<" "<<a[right].second<<endl;
        return 0;
    }
   }
   cout<<"IMPOSSIBLE"<<endl;
   return 0;
}