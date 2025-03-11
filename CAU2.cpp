/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname "CAU2"
#define ll long long
#define fi first
#define se second
#define simp main
#define pb push_back
using namespace std;
const int N = 1e6;
int simp() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    vector<ll> d(N+1,0);
    for(ll i =1;i<=1000;i++){
        for(ll j=i*i;j<=N;j+=i){
            if(j/i!=i){
                d[j]+=2;
            }else{
                d[j]++;
            }
        }
    }
    vector<ll> c(N+1,0);
    for(ll i=1;i<=N;i++){
        if(d[d[i]]==2){
            c[i]=c[i-1]+1;
        }else{
            c[i]=c[i-1];
        }
    }
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        cout << c[b]-c[a-1] << '\n';
    }
    return 0;
}