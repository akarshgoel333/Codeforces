#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define yes cout<<"Yes"<<"
"
#define no cout<<"No"<<"
"
#define alice cout<<"Alice"<<"
"
#define bob cout<<"Bob"<<"
"
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll>arr(n);
    for(auto &x: arr){
        cin>>x;
    }
    priority_queue<ll>sml;
    ll res = LLONG_MIN;
    ll sumi = 0;
    for(int i=0; i<n; i++){
        if((int)sml.size()==(m-1)){
            ll cs = arr[i]*m*1LL - sumi;
            res = max(res,cs);
        }
        sml.push(arr[i]);
        sumi = sumi + arr[i];
        if((int)sml.size()>(m-1)){
            sumi -= sml.top(); 
            sml.pop();
        }
    }
    cout<<res<<endl;
    // string s;
    // cin>>s;
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false), 
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}