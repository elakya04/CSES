#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<ll>ind(n+1);
    for(int i=0;i<n;i++){
        ind[nums[i]]=i;
    }
    ll ans=1;
    for(int i=1;i<n;i++){
        if(ind[i+1]<ind[i]){
            ++ans;
        }
    }
    cout<<ans<<endl;
}