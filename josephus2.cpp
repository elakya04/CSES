#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;cin>>n>>k;
    queue<ll> q;
    for(ll i=1;i<=n;i++)
    q.push(i);
    bool flag=false;
    while(!q.empty()){
        ll ele=q.front();
        q.pop();
        if(flag){
            cout<<ele<<" ";
        }
        else{
            q.push(ele);
        }
        
        flag=!flag;
    }

}