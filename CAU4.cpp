/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname "CAU4"
#define ll long long
#define fi first
#define se second
#define simp main
#define pb push_back
using namespace std;

int simp() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    string st;
    cin >> st;
    ll s = st.size();
    ll n;
    cin >> n;
    vector<ll> d(s+1, 0);  
    for(ll i = 0; i < n; i++) {
        ll k;
        cin >> k;
        d[k-1]++;
    }
    for(ll i = 0; i < s; i++) {
        if(d[i] % 2 == 1) {
            reverse(st.begin() + i, st.begin() + (s - i));
        }
    }
    
    cout << st;
    return 0;
}