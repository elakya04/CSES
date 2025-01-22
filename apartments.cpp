/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m,k,count=0,index=0;
    cin>>n>>m>>k;
    vector<ll> apt_dsize(n);
    vector<ll> apt_size(m);
    for(ll i=0;i<n;i++){
    cin>>apt_dsize[i];
}
for(ll i=0;i<m;i++){
  cin>>apt_size[i];}
sort(apt_dsize.begin(),apt_dsize.end());
sort(apt_size.begin(),apt_size.end());
for(int i=0;i<n;i++)
{
    while(index<m)
{
    if(apt_size[index]<apt_dsize[i]-k)
    index++;
    else if(apt_size[index]>apt_dsize[i]+k)
    break;
    else{
        index++;
        count++;
        break;
    }
}}
cout<<count<<endl;}
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main(){
    ll m,n,k;cin>>n>>m>>k;
    vector<ll>dapt_size(n);
    for(int i=0;i<n;i++){
        cin>>dapt_size[i];
    }
    vector<ll>apt_size(m);
    for(int i=0;i<m;i++){
        cin>>apt_size[i];
    }
    ll index=0,count=0;
    sort(dapt_size.begin(),dapt_size.end());
    sort(apt_size.begin(),apt_size.end());
    for(int i=0;i<n;i++){
        while(index<m){
        if(apt_size[index]<dapt_size[i]-k){
            index++;
        }
        else if(apt_size[index]>dapt_size[i]+k)
            break;
        else{
            index++;
            count++;
            break;
        }
        }
    }
    cout<<count<<endl;
}
