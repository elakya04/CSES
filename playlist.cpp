#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>songs(n);
    for(int i=0;i<n;i++){
        cin>>songs[i];
    }
    ll start=0;
    ll ans=0;
    map<ll,ll>mp;
    for(ll end=0;end<n;end++){
        if(mp.find(songs[end])==mp.end()){
            mp.insert({songs[end],end});
        }
        else{
            if(mp[songs[end]]>=start)
                start=mp[songs[end]]+1;
                mp[songs[end]]=end;
        }
        ans=max(ans,end-start+1);
    }
cout<<ans<<endl;
}