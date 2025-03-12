/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname "CAU5"
#define ll long long
#define fi first
#define se second
#define simp main
#define pb push_back
using namespace std;
bool cmp(string a, string b){
    return a + b > b + a;
}
int simp() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll t;
    cin >> t;
    vector<string> a;
    while(t--){
        ll n;
        cin >> n;
        for(ll i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                stringstream ss;
                ss << i;
                a.pb(ss.str());
                n /= i;
            }
        }
        if(n > 1){
            stringstream ss;
            ss << n;
            a.pb(ss.str());
        }
    }
    sort(a.begin(), a.end(), cmp);
    for(ll i = 0; i < a.size(); i++){
        cout << a[i];
        }
    return 0;
}