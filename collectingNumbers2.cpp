/*#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,ans;cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  for(int j=0;j<m;j++)
  {ans=1;
    int a,b;
    cin>>a>>b;
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
int ind[n+1];
for(int i=0;i<n;i++)
{ind[arr[i]]=0;
ind[arr[i]]+=i;
}
for(int num=1;num<n;num++){
    if(ind[num+1]<ind[num])
    ans++;
}
  cout<<ans<<endl;
}
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,m;cin>>n>>m;
  vector<ll>num(n);
  for(int i=0;i<n;i++){
    cin>>num[i];
  }
  for(int q=0;q<m;q++){
    ll a,b;cin>>a>>b;
    swap(num[a],num[b]);
    vector<ll>ind(n);
    for(int i=0;i<n;i++){
      ind[num[i]]=i;
    }
    ll count=1;
    for(int i=1;i<n;i++){
        if(ind[i+1]>ind[i])
        ++count;
    }
    cout<<count<<endl;
  }   
}*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll A, B;
    cin >> A >> B;
    
    // Maps to store element positions and reverse mapping
    unordered_map<ll, ll> m;  // Maps index to value
    unordered_map<ll, ll> n;  // Maps value to index

    // Input the initial array values
    for (ll i = 0; i < A; i++) {
        ll k;
        cin >> k;
        m[i + 1] = k;  // Store the value at position i+1
        n[k] = i + 1;  // Store the position of value k
    }

    ll ans = 1;

    // Count the number of segments where value at a higher index is smaller
    for (ll i = 1; i < n.size(); i++) {
        if (n[i] > n[i + 1]) ans++;
    }

    // Process B swap operations
    for (ll i = 0; i < B; i++) {
        ll x, y;
        cin >> x >> y;

        /*ll in=(n[x-1]<n[x])+(n[x]<n[x+1])+(n[y-1]<n[y])+(n[y]<n[y+1]);

        swap( n[x], n[y]);

        in-=(n[x-1]<n[x])+(n[x]<n[x+1])+(n[y-1]<m[y])+(n[y]<n[y+1]);

        ans-=in;
        cout << ans << endl;*/

        ll a = m[x], b = m[y];  // Values at indices x and y

        // Adjust 'ans' before the swap by checking neighbors
        if (a > 1 && n[a] < n[a - 1]) ans--;
        if (a < A && n[a + 1] < n[a]) ans--;
        if (b > 1 && (b - 1 != a) && n[b] < n[b - 1]) ans--;
        if (b < A && (b + 1 != a) && n[b + 1] < n[b]) ans--;

        // Perform the swap in both maps
        swap( m[x], m[y]);
        swap( n[a], n[b]);

        // Adjust 'ans' after the swap by checking neighbors again
        if (a > 1 && n[a] < n[a - 1]) ans++;
        if (a < A && n[a + 1] < n[a]) ans++;
        if (b > 1 && (b - 1 != a) && n[b] < n[b - 1]) ans++;
        if (b < A && (b + 1 != a) && n[b + 1] < n[b]) ans++;

        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
