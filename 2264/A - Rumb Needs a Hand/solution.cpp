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
    for(auto &x: arr){
        cin>>x;
    }
    vector<int>revi;
    for(int i=0; i<n; i++){
        if(arr[i]!=i+1) revi.push_back(i);
    }
    int m = revi.size();
    if(m==0){
        yes;
        return;
    }
    for(int i=0; i<m/2; i++){
        swap(arr[revi[i]],arr[revi[m-i-1]]);
    }
    bool flag = true;
    for(int i=0; i<n; i++){
        if(arr[i]!=i+1){
            no;
            return;
        }
    }
    yes;
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