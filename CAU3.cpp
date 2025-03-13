/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname "cpp"
#define ll long long
#define fi first
#define se second
#define simp main
#define pb push_back
using namespace std;
ll n;
// n<= 100,a[i]<=1e4
vector<ll> a(2e4);
void sub1(){
    ll kq =0;
    for(ll i =0;i<n-2;i++){
        for(ll j =i+1;j<n-1;j++){
           for(ll k =j+1;k<n;k++){
               if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k]){
                   kq++;
               }
           }
        }
    }
    cout << kq;
}
// n<=3000,a[i]<=1e6
void sub2(){
    ll kq =0;
    vector<ll> b(1e6+1,0);
    for(ll i =0;i<n;i++){
        b[a[i]]=1;
    }
    for(ll i =0;i<n-1;i++){
        for(ll j =i+1;j<n;j++){
            ll x = a[i]*a[i]+a[j]*a[j];
            ll m = sqrt(x);
            if(m*m==x){
                kq+=b[m];
            }
        }
    }
    cout << kq;
}
// n<=2e4,a[i]<=3e3
void sub3(){
    ll kq =0;
    vector<ll> b(3e3+1,0);
    for(ll i =0;i<n;i++){
        b[a[i]]=1;
    }
    for(ll i =1i<3e3;i++){
        for(ll j =i+1;j<=3e3;j++){
            ll x = i*i+j*j;
            ll m = sqrt(x);
            if(m*m==x&&m<=3e3){
                kq+=b[m]*b[i]*b[j];
            }
        }
    }
    cout << kq;
}
int simp() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    cin >> n;
    for(ll i =0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.begin()+n);
    if(n<=100){
        sub1();
    }else if(n<=3000){
        sub2();
    }else{
        sub3();
    }
    return 0;
}