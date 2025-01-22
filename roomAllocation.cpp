#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<vector<ll>>day;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        day[i].push_back(a);
        day[i].push_back(b);
        day[i].push_back(i);
        }
    sort(day.begin(),day.end());
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>rooms;

}