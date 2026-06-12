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
    int n,k;
    cin>>n>>k;
    // vector<int>arr(n);
    // for(auto &x: arr) cin>>x;
    // int maxi = *max_element(arr.begin(), arr.end());
    // int mini = *min_element(arr.begin(), arr.end());
    string s;
    cin>>s;
    vector<int>freq(k,0);
    for(int i=0; i<n; i++){
        if(s[i]=='1') freq[i%k]++;
    }
    for(int i=0; i<k; i++){
        if(freq[i]%2!=0){
            no;
            return;
        }
    }
    yes;
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