#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    bool turn=false;
    queue<ll>q;
    for(int i=1;i<=n;i++)
    q.push(i);
    while(!q.empty()){
        ll ele=q.front();
        q.pop();
        if(turn){
            cout<<ele<<" ";
        }
        else{
            q.push(ele);
        }   
        turn=!turn;}
    return 0;
}