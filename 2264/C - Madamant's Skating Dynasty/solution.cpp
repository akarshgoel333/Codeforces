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
const ll MOD = 998244353;
 
ll mPow(ll a, ll b) {
    ll res = 1;
 
    while (b) {
        if (b & 1)
            res = res * a % MOD;
 
        a = a * a % MOD;
        b >>= 1;
    }
 
    return res;
}
 
void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) {
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<n-1; i++) {
        if (arr[i] == arr[i+1]) {
            cout<<-1<<endl;
            return;
        }
    }
 
    ll fct = 1;
    for (int i=1; i<n; i++) {
        fct = fct * i % MOD;
    }
 
    vector<ll> suffix(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = (suffix[i + 1] + arr[i]) % MOD;
    }
    ll res = 0;
    for (int i = 0; i < n - 1; i++) {
        ll chx = n - i - 1;
        ll eSum = suffix[i + 1] - chx * (arr[i] % MOD) % MOD;
        eSum = (eSum % MOD + MOD) % MOD;
        ll ways = fct * mPow(chx, MOD - 2) % MOD;
        res = (res + eSum * ways) % MOD;
    }
    cout<<res<<endl;
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