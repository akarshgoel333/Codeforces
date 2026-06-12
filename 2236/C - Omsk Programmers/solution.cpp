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
    ll a,b,x;
    cin>>a>>b>>x;
    // vector<int>arr(n);
    // for(auto &x: arr) cin>>x;
    // int maxi = *max_element(arr.begin(), arr.end());
    // int mini = *min_element(arr.begin(), arr.end());
    // string s;
    // cin>>s;
    ll steps = abs(a - b); 
    ll cst = 0;
    while((a>0) || (b>0)) {
        if(a<b) swap(a,b);
        a /= x;
        cst++;
        steps = min(steps, cst + abs(a - b));
    }
    cout<<steps<<endl;
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