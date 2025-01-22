#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,temp;
    cin>>n>>m;
    multiset<ll>price;
    for(int i=0;i<n;i++){
        cin>>temp;
        price.insert(temp);
    }
    //sort(price.begin(),price.end());
    for(int i=0;i<m;i++){
        cin>>temp;
        auto up=price.upper_bound(temp);
        if(up==price.begin()){
            cout<<-1<<endl;
        }
        else{
            --up;
            cout<<*up<<endl;
            price.erase(up);
        }
    }
    return 0;
}

