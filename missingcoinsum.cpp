#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    sort(coin.begin(),coin.end());
    ll target=1;
    for(auto c:coin){
        if(c>target){
            break;
        }
        target+=c;
    }
    cout<<target<<endl;
    }