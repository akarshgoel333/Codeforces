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
    int n;
    cin>>n;
    vector<int>arr(n);
    for(auto &x: arr) cin>>x;
    int maxi = *max_element(arr.begin(), arr.end());
    int mini = *min_element(arr.begin(), arr.end());
    // string s;
    // cin>>s;
    // for(int i=0; i<n; i++){
 
    // }
    cout<<maxi+1-mini<<endl;
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