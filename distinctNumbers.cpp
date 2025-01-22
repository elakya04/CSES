#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    set<ll>s;
    ll temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.insert(temp);
    }
    cout<<s.size()<<endl;
}