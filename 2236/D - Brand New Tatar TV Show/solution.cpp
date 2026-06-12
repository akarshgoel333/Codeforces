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
    ll n,k;
    cin>>n>>k;
    vector<int> crr(n+2,0);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            crr[x]++;
        }
    // vector<int>arr(n);
    // for(auto &x: arr) cin>>x;
    // int maxi = *max_element(arr.begin(), arr.end());
    // int mini = *min_element(arr.begin(), arr.end());
    // string s;
    // cin>>s;
    vector<ll> pff(n+2,0);
    vector<char> wrng(n+2,0);
    for(int x=n; x>=1; x--){
        int h=min(x+k,n);
        ll rngb = pff[x+1] - pff[h+1];
        bool flag = rngb>0;
        if(crr[x]>0 && (crr[x]&1) && (!flag)){
            wrng[x]=1;
            pff[x]=pff[x+1]+1;
        }
        else{
            wrng[x]=0;
            pff[x] = pff[x+1];
        }
    }
    bool ans=false;
    for(int j=1; j<=n; j++){
        if(crr[j]>0 && wrng[j]==0){
            ans=true; 
            break; 
        }
    }
    if(ans) yes;
    else no;
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