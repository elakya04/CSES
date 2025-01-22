/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,x;
cin>>n>>x;
vector<ll> wt;
for(ll i=0;i<n;i++){
ll temp;
cin>>temp;
wt.push_back(temp);
}
ll p_beg=0,p_end=n-1;
sort(wt.begin(),wt.end());
while(p_beg<p_end){
    if(wt[p_beg]+wt[p_end]<=x){
        n--;
        p_beg++;
        p_end--;
    }
    else
    p_end--;
}
cout<<n<<endl;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,x;
  cin>>n>>x;
  vector<ll>p(n);
  for(ll i=0;i<n;i++){
    cin>>p[i];
  }  
  ll pbeg=0,pend=n-1;
  sort(p.begin(),p.end());
  while(pbeg<pend){
    if(p[pbeg]+p[pend]<=x){
        --n;
        ++pbeg;
        --pend;
    }
    else{
        --pend;
    }
  }
  cout<<n<<endl;
}