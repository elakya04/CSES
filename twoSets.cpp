#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    vector<ll>set1,set2;
    if(sum%2==0){
        cout<<"YES"<<endl;
        ll mid=sum/2;
        for(ll i=n;i>=1;i--){
               if(i<=mid) {
                set1.push_back(i);
                mid-=i;
               }    
               else
                set2.push_back(i); }
                cout<<set1.size()<<endl;
                for(ll i=0;i<(int)set1.size();i++)
                cout<<set1.at(i)<<" ";
                cout<<endl;
                cout<<set2.size()<<endl;
                for(ll i=0;i<(int)set2.size();i++)
                cout<<set2.at(i)<<" ";
                cout<<endl;
                    }
 else
 cout<<"NO"<<endl;        
}