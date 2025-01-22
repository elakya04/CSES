#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll n;cin>>n;
 vector<pair<ll,ll>>event;
 for(int i=0;i<n;i++){
    ll temp1,temp0;
    cin>>temp0>>temp1;
    event.push_back({temp0,1});
    event.push_back({temp1,0});
 }   
 ll count=0,maxcount=0;
 sort(event.begin(),event.end());
 for(auto t:event){
    if(t.second==1){
        count++;
    }
    else{
        count--;
    }
    maxcount=max(maxcount,count);
 }
 cout<<maxcount<<endl;
} 

